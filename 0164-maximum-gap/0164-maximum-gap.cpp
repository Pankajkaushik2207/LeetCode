// class Solution {
// public:
//     int maximumGap(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int ans = INT_MIN;
//         int start=1;
//         if(start>2){
//             return 0;
//         }
//         else{
//         for(int i=0;i<nums.size();i++){
            
//              ans =max(ans,nums[i+1]-nums[i]);
            
//         }}
//         return ans;
//     }
// };

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MIN;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++)
        {
            ans=max(ans,nums[i+1]-nums[i]);
        }
        if(n>1)
            return ans;
        else
            return 0;
    }
};