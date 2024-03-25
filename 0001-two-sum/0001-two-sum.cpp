class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> numMap; // Store number and its index

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];

            // If complement exists in the map, we found the solution
            if (numMap.find(complement) != numMap.end()) {
                return {numMap[complement], i};
            }

            // Otherwise, store the current number and its index in the map
            numMap[nums[i]] = i;
        }

        // No solution found, returning empty vector
        return {};
    }
};
