class Solution {
public:
    void reverseString(vector<char>& s) {
        unsigned len = s.size();
        if(len <= 1)
            return;
        int i{0};
        unsigned j = len - 1;

        while(i <= j) {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
};