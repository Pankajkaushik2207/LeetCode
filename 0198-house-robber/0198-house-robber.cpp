class Solution {
public:
    
 
    int solvedp(vector<int>& nums,int n, vector<int>&dp){
        if(n<0){
            return 0;
        }
        if(n==0){
            return nums[0];
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        int include = solvedp(nums,n-2,dp)+nums[n];
        int exclude = solvedp(nums,n-1,dp)+0;
        dp[n]= max(include,exclude);
        return dp[n];
    }
    
    
    int rob(vector<int>& nums) {
     
        
        
        
        int n= nums.size()-1;
        vector<int>dp(n+1,-1);
        int ans = solvedp(nums,n,dp);
        return ans;
        
        
        
        
    }
    
};