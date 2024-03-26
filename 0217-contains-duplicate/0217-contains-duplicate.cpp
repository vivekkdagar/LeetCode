#include <vector>
#include <unordered_set>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> numSet;
        for (int num : nums) {
            if (numSet.find(num) != numSet.end()) {
                return true; // Found a duplicate, terminate early
            }
            numSet.insert(num);
        }
        return false; // No duplicates found
    }
};
