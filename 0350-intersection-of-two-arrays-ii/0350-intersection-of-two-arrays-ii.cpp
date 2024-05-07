class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        // bool ans = true;
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    ans.push_back(nums1[i]);
                    nums2[j]=-1;
                    nums1[i]=-2;
                }
            }
        }
        return ans;
    }
};