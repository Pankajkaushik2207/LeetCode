class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        vector<int> res;
        if(is_sorted(arr.begin(),arr.end())){
            return res;
        }
        int ele=(int)arr.size();
        int pos=(int)arr.size();
        vector<int> perm(ele);
        iota(perm.begin(),perm.end(),1);
        while(true){
            if(arr==perm){
                break;
            }
            int it=find(arr.begin(),arr.end(),ele)-arr.begin();
            if(it==pos-1){
                ele-=1;
                pos-=1;
            }
            for(int i=1;i<=(int)arr.size();i++){
                if(arr[i-1]==ele){
                    res.push_back(i);
                    res.push_back(ele);
                    reverse(arr.begin(),arr.begin()+i);
                    reverse(arr.begin(),arr.begin()+ele);
                    ele-=1;
                    pos-=1;
                    break;
                }
            }
        }
        return res;
    }
};