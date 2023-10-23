class Solution {
public:
     bool even(int n){
         if(n%2==0){
             return true;
         }else{
             return false;
         }
     }
    bool subSetHelper(vector<int>&arr,int sum, int n, vector<vector<int>>&dp){
      if(sum==0){
          return true;
      }
      
      if(n==0){
          return false;
      }
      
      if(dp[n][sum]!=-1){
          return dp[n][sum];
      }
      
      if(arr[n-1]>sum){
          dp[n][sum]= subSetHelper(arr,sum,n-1,dp);
      }else{
          dp[n][sum]=subSetHelper(arr,sum,n-1,dp) || subSetHelper(arr,sum-arr[n-1],n-1,dp)  ;
      }
      return dp[n][sum];
      
  }
    
   bool canPartition(vector<int>& nums) {
    int n = nums.size();
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    
    if (sum % 2 != 0) {
        return false; // If the sum is odd, it can't be partitioned into two equal subsets.
    }
    
    int ans = sum / 2;
    vector<vector<int>> memo(n + 1, vector<int>(ans + 1, -1));
    
    return subSetHelper(nums, ans, n, memo);
}

};