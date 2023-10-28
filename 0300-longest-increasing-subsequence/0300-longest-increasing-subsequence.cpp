class Solution {
public:
    
    int solveUsingRecursion(vector<int>&nums,int curr,int perv,vector<vector<int>>&dp){
        if(curr>=nums.size()){
            return 0;
        }

        // Check if the perv index is within the bounds of the dp vector
        // if(perv >= 0 && perv < dp.size()){
            if(dp[curr][perv+1]!=-1){
                return dp[perv+1][curr];
            }
        

        int include=0;
        
        if(perv==-1 || nums[perv]<nums[curr])
            include =1+ solveUsingRecursion(nums,curr+1,curr,dp);
        
        int exclude = 0+solveUsingRecursion(nums,curr+1,perv,dp);

        // if(perv >= 0 && perv < dp.size()){
            dp[curr][perv+1] =  max(include,exclude);
   

        return dp[curr][perv+1];
        
    }
    
    int lengthOfLIS(vector<int>& nums) {
        int curr = 0;
        int perv = -1;
        vector<vector<int>>dp(nums.size()+1, vector<int>(nums.size()+1,-1));
        return solveUsingRecursion(nums,curr,perv,dp);
        
    }
};
