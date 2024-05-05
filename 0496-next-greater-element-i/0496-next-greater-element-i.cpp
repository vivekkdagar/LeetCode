class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nextLarger = nextLargerElement(nums2);

        unordered_map<int, int> indexMap;
        for (int i = 0; i < nums2.size(); ++i) {
            indexMap[nums2[i]] = i;
        }

        for (int & j : nums1) {
            j = nextLarger[indexMap[j]];
        }
        return nums1;
    }


     vector<int> nextLargerElement(vector<int> arr) {
        int n = arr.size();
        vector<int> result(n, -1);
        stack<int> st;
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && st.top() <= arr[i]) {
                st.pop();
            }

            if (i < n) {
                if (not st.empty())
                    result[i] = st.top();
            }
            st.push(arr[i]);
        }
        return result;
    }
};