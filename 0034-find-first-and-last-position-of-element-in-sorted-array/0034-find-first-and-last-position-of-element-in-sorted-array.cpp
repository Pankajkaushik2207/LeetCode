class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2,-1);
        int n = nums.size();
        if(nums.size()<=0){
            return ans;
        }
        
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                ans[0]=i;
                break;
            }
            
        }
        for(int i=n-1;i>=0;i--){
            if(nums[i]==target){
                ans[1]=i;
                break;
            }
            
        }
        return ans;
    }
};