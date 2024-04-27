class Solution
{
public:
    static int countPrimes(int n) {
        if(n <= 2)
            return 0;

        vector<bool>prime(n+1, true);
        prime[0] = prime[1] = false;

        for(int p{2}; p * p < n; p++)
            if(prime.at(p))
                for(int i{p*p}; i < n; i += p)
                    prime.at(i) = false;

        return std::count_if(prime.begin() + 2, prime.end()-1,
                                   [](bool value) { return value; });
    }
};