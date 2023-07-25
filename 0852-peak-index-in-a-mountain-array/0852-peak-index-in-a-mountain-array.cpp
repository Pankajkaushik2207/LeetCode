class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
          priority_queue<int>mh;
          int m;
          int i=0;
        
        for(;i<arr.size();i++){
            mh.push(arr[i]);
            if(arr[i]==mh.top()){
              m=i;
           }
        }
         
         
        return m;
        
    }
};