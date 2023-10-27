class Solution {
public:
    int solveUsingRecursion(vector<int>&arr, map< pair <int,int>, int>& maxi,int start,int end, vector<vector<int>>&dp){
        if(start==end){
            return 0;
        }
        if(dp[start][end]!=-1){
            return dp[start][end];
        }
        int ans =INT_MAX;
        for(int i=start;i<end;i++){
            ans = min(ans,maxi[{start,i}]*maxi[{i+1,end}]
                     +solveUsingRecursion(arr,maxi,start,i,dp)
                     +solveUsingRecursion(arr,maxi,i+1,end,dp));
        
        }
        dp[start][end]= ans;
        return dp[start][end];
    }
    
    int mctFromLeafValues(vector<int>& arr) {
        map<pair<int,int>, int> maxi;
        
        for(int i=0;i<arr.size();i++){
            maxi[{i,i}]=arr[i];
            
            for(int j=i+1;j<arr.size();j++){
                maxi[{i,j}]= max(arr[j],maxi[{i,j-1}]);
            }
        }
     
        int n= arr.size();
           vector<vector<int>>dp(n+1, vector<int>(n+1,-1));
        int ans = solveUsingRecursion(arr,maxi,0,n-1,dp);
        return ans;
    }
};