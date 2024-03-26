class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        
        // If len(Set(Array)) == len(Array), then no duplicates exist
        std::unordered_set<int> numSet(nums.begin(), nums.end());
        return numSet.size() not_eq nums.size();
    }
};
