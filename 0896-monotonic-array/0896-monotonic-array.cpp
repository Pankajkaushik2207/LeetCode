// class Solution {
// public:
//     bool isMonotonic(vector<int>& nums) {
//       int   n = nums.size();
//         for(int i=0;i<=n;i++){
//             while(i<n){
//                 if(nums[i+1]>nums[i]  || nums[i]>nums[i+1]){
//                     return true;
//                 }else if(nums[i]<nums[i+1] && nums[i+1]>nums[i+2]){
//                     return false;
//                 }
//             }
//         }
//         return true;
//     }
// };
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        
        int count1=0,count2=0;
        
        for(int i=0;i<nums.size()-1;i++){
            
            if(nums[i]<=nums[i+1])count1++;
            
            if(nums[i]>=nums[i+1])count2++;}
        
        if(count1==nums.size()-1 || count2==nums.size()-1)return true;
        
        else return false;
    }
};
