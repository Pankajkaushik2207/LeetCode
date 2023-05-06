// class Solution {
// public:
//     vector<int> twoPointerApproach(vector<int>& arr, int k, int x) {
//         int l = 0, h = arr.size()-1;
//         while(h-l>=k){
//             if(x-arr[l] > arr[h]-x){
//                 l++;
//             }
//             else{
//                 h--;
//             }
            
// //             vector<int > ans;
// //             for(int i = l;i<=h;i++){
// //                 ans.push_back(arr[i]);
// //             }
//         }
//         return vector<int>(arr.begin() + l, arr.begin()+h+1);
    
//     }
// };
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int target) {
        int low=0; int high= arr.size()-1;
        //mid= low+ (high-low)/2;
        int ans1=0;
        while (low<=high){
            int mid= low+ (high-low)/2;
            if (arr[mid]== target)break;
            if (arr[mid]< target){
                ans1= mid;
                low= mid+1;
            }
            else {
                high= mid-1;
            }
        }
        deque<int> ans;
        if (ans1+1 <arr.size()){
            if (abs(target- arr[ans1]) > abs(target- arr[ans1+1]))ans1++;
        }
        ans.push_back(arr[ans1]);
        int i= ans1-1; int j=ans1+1;
        while (--k){
            if (i >= 0 && j < arr.size()){
                if (abs(arr[i]-target) <= abs(arr[j]-target)){
                    ans.push_front(arr[i]);
                    i--;
                }
                else{
                    ans.push_back(arr[j]);
                    j++;
                }
            }
            else if (i >=0){
                ans.push_front(arr[i]);
                i--;
            }
            else if (j<arr.size()){
                ans.push_back(arr[j]);
                j++;
            }
        }
        vector<int> v_ans;
        for (auto val: ans)v_ans.push_back(val);
        return v_ans;
    }
};