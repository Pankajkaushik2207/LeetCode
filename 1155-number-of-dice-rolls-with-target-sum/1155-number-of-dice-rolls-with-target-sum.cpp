class Solution {
public:
    int MOD =  1000000007;
    long long int solveUsingDp(int n, int k, int target, vector<vector<long long int>>&dp){
            long long int ans = 0;
        if(n==0 && target ==0){
            return 1;
        }
        if(n!=0 && target ==0){
            return 0;
        }
        if(n==0 && target!=0){
            return 0;
        }
        if(dp[n][target]!=-1){
            return dp[n][target];
        }
        for(int i=1;i<=k;i++){
            if(target-i>=0)
              ans+=solveUsingDp(n-1,k,target-i,dp);
            ans%=MOD;
        }
         dp[n][target]=ans;
        return dp[n][target];
         
     }
     
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<long long int>>dp(n+1,vector<long long int>(target+2,-1));
       long long int ans = solveUsingDp(n,k,target,dp);
        return ans;
       
    }
};