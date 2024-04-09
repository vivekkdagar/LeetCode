class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        // Sum of n natural numbers
        n = n * (n + 1) / 2;

        // For every number, subtract it from nums.
        for(int i : nums)
            n -= i;
        
        return n;
    }
};