class Solution {
public:
       
    bool check(vector<int>&a, vector<int>&b){
        if(b[0]<=a[0] && b[1]<=a[1] && b[2]<=a[2])
            return true;
        else
        return false;
        
    }
    
      int solveUsingRecursion(vector<vector<int>>&nums){
          int n = nums.size();
          vector<int>currRow(n+1,0);
          vector<int>nextRow(n+1,0);
          
        // if(curr>=nums.size()){
        //     return 0;
        // }

        // Check if the perv index is within the bounds of the dp vector
        // if(perv >= 0 && perv < dp.size()){
            // if(dp[curr][perv+1]!=-1){
            //     return dp[perv+1][curr];
            // }
          
        for(int curr =n-1;curr>=0;curr--){
            for(int prev = curr-1;prev>=-1;prev--){
                
                 int include=0;
        
        if(prev==-1 || check(nums[curr],nums[prev]))
            include =nums[curr][2]+ nextRow[curr+1];
        
        int exclude = 0+nextRow[prev+1];
                currRow[prev+1] =  max(include,exclude);
   
                
            }
            nextRow=currRow;
        }

       return nextRow[0];
        
    }
    
    int maxHeight(vector<vector<int>>& cuboids) {
        
        for(auto &a:cuboids){
            sort(a.begin(),a.end());
        }
        
        sort(cuboids.begin(),cuboids.end());
        
        int ans = solveUsingRecursion(cuboids);
        return ans;
    }
};