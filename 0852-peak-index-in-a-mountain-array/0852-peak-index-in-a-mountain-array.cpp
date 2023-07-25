class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
          priority_queue<int>mh;
        int m;
        
        for(int i=0;i<arr.size();i++){
            mh.push(arr[i]);
        }
           int i=0;
           for(;i<arr.size();i++){
           if(arr[i]==mh.top()){
              m=i;
           }
        }
        return m;
        
    }
};