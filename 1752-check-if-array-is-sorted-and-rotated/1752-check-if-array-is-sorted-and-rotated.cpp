class Solution {
public:
    bool check(vector<int>& nums) {
        unsigned short n = nums.size(), count{0};
        
        for(unsigned short i{1}; i < n; i++) {
            if(nums[i-1] > nums[i]) {
                count++;
            }
        }

        if(nums[n-1] > nums[0]) {
            count++;
        } return count <= 1;
    }
};