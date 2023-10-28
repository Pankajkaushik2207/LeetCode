class Solution {
public:
    
    int solveUsingRecursion(string& text1, string& text2,int i,int j,vector<vector<int>>&dp){
        if(i==text1.length()){
            return 0;
        }
        if(j==text2.length()){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        
        if(text1[i]==text2[j]){
            return  dp[i][j]=1+solveUsingRecursion(text1,text2,i+1,j+1,dp);
        }else{
            return dp[i][j]=0+ max(solveUsingRecursion(text1,text2,i+1,j,dp),solveUsingRecursion(text1,text2,i,j+1,dp));
        }
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        int i=0;
        int j=0;
        vector<vector<int>>dp(text1.length()+1, vector<int>(text2.length()+1,-1));
        return solveUsingRecursion(text1,text2,i,j,dp);
    }
};