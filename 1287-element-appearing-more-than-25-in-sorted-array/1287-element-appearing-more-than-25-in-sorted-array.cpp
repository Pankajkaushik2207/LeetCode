class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n= arr.size();
        int ans;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(arr[i]==arr[j]){
                    count++;
                }
            }
            if(count>n/4){
                ans=arr[i];
            }
        }
        return ans;
        
    }
};