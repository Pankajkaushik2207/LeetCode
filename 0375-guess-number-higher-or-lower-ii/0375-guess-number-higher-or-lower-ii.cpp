class Solution {
public:
    
    int solveUsingRecursion(int start, int end,vector<vector<int>>&dp){
        if(start>=end){
            return 0;
        }
        if(dp[start][end]!=-1){
            return dp[start][end];
        }
        int ans=INT_MAX;
        for(int i=start;i<=end;i++){
            ans=min(ans,i+max(solveUsingRecursion(start,i-1,dp),solveUsingRecursion(i+1,end,dp)));
        }
        dp[start][end]=ans;
        return dp[start][end];
    }
    
    
    int getMoneyAmount(int n) {
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        
        int ans = solveUsingRecursion(1,n,dp);
        return ans;
    }
};