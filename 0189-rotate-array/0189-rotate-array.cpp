class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        rotate2(nums, k%nums.size(), 0);
    }

    void rotate2(vector<int>& nums, int k, int start) {
        if (start == nums.size()-1)
            return;
        k = k%(nums.size()-start);
        if (not k)
            return;
        for (int i = start, j = nums.size()-k; j < nums.size(); ++i, ++j)
            swap(nums[i], nums[j]);
        rotate2(nums, k, start+k);
    }
};