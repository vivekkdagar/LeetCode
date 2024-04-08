class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int L = 0;
        for(int R = 0; R < nums.size(); R++) {
            if(nums[R] not_eq 0) {
                    swap(nums.at(L), nums.at(R));
                    L++;
            }
        }
    }
};