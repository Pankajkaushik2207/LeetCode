class Solution {
public:
    int coinChange2(vector<int>&dp,vector<int>&coins,int amount){
        
         if(amount ==0){
            return 0;
        }
        if(amount<0){
            return INT_MAX;
        }
        if(dp[amount]!=-1){
            return dp[amount];
        }
        int mini = INT_MAX;
        for(int i=0;i<coins.size();i++){
          int  ans = coinChange2(dp,coins,amount-coins[i]);
            if(ans!=INT_MAX){
                mini = min(mini,1+ans);
            }
        }
        dp[amount]=mini;
            return dp[amount];
    }
    int coinChange(vector<int>& coins, int amount) {
        // if(amount ==0){
        //     return 0;
        // }
        // if(amount<0){
        //     return INT_MAX;
        // }
        // int mini = INT_MAX;
        // for(int i=0;i<coins.size();i++){
        //   int  ans = coinChange(coins,amount-coins[i]);
        //     if(ans!=INT_MAX){
        //         mini = min(mini,1+ans);
        //     }
        // }
        //     return mini;
        vector<int>dp(amount+1,-1);
        int ans=coinChange2(dp,coins,amount);
        if(ans!=INT_MAX){
            return ans;
        }else{
            return -1;
        }
        }
    
};