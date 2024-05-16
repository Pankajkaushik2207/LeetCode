class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftProduct(n, 1); // Store product of elements to the left of i
        vector<int> rightProduct(n, 1); // Store product of elements to the right of i

        // Calculate leftProduct[i] for each element
        for (int i = 1; i < n; ++i) {
            leftProduct[i] = leftProduct[i - 1] * nums[i - 1];
        }

        // Calculate rightProduct[i] for each element
        for (int i = n - 2; i >= 0; --i) {
            rightProduct[i] = rightProduct[i + 1] * nums[i + 1];
        }

        // Multiply left and right products to get the final result
        vector<int> result(n);
        for (int i = 0; i < n; ++i) {
            result[i] = leftProduct[i] * rightProduct[i];
        }

        return result;
    }
};