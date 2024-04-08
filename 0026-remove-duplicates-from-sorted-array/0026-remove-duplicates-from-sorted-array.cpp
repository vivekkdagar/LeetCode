class Solution {
public:
    int removeDuplicates(vector<int> &nums) {
    if (nums.empty()) return 0;

    int index = 0; // Index to keep track of where to place the next unique element
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] not_eq nums[index]) {
            index++;
            nums[index] = nums[i]; // Place the unique element at the next available index
        }
    }
    return index + 1; // Return the length of the new array
}
};