class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        for(int i=0;i<=n;i++){
            int j = i;
            int count = 0;
            for(int k=0;k<ceil(log2(n+1));k++){
                if(j>>k&1)
                    count++;
            }
            v.push_back(count);
        }
        return v;
    }
};