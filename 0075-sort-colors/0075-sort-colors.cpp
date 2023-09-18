class Solution {
public:
    void sortColors(vector<int>& nums) {
      int n = nums.size();
        for(int i =0;i<n;i++){
            int miniIndex = i;
            for(int j = i+1;j<n;j++){
                if(nums[j]<nums[miniIndex]){
                    miniIndex = j;
                }
            }
            swap(nums[i],nums[miniIndex]);
        }
    }
};