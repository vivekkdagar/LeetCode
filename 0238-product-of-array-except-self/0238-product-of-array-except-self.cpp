class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<int> result(n, 1);

        // Compute the product of all elements to the left of each element
        int leftProduct = 1;
        for (int i = 0; i < n; ++i) {
            result[i] *= leftProduct;
            leftProduct *= nums[i];
        }

        // Compute the product of all elements to the right of each element
        int rightProduct = 1;
        for (int i = n - 1; i >= 0; --i) {
            result[i] *= rightProduct;
            rightProduct *= nums[i];
        }

        return result;
    }
};
