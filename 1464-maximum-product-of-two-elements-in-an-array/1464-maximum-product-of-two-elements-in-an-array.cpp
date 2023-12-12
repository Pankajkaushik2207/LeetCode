class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProduct = INT_MIN;
        int n = nums.size();

        // Find the two maximum elements in the array
        int max1 = INT_MIN, max2 = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (nums[i] >= max1) {
                max2 = max1;
                max1 = nums[i];
            } else if (nums[i] > max2) {
                max2 = nums[i];
            }
        }

        // Calculate and return the maximum product
        maxProduct = (max1 - 1) * (max2 - 1);
        return maxProduct;
    }
};
