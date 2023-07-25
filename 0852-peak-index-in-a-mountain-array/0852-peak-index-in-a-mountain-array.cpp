class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
//           priority_queue<int>mh;
//           int m;
//           int i=0;
        
//         for(;i<arr.size();i++){
//             mh.push(arr[i]);
//             if(arr[i]==mh.top()){
//               m=i;
//            }
//         }
         
         
//         return m;
        int l=0, r= arr.size()-1, mid;
        while(l<r){
            mid   =(l+r)/2;
            if(arr[mid]<arr[mid+1]){
                l= mid+1;
            }else{
                
                r=mid;
            }
            
        }
        return l;
    }
};