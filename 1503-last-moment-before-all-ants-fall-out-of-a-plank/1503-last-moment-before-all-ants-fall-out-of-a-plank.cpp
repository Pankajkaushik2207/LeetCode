class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
     int maximum_index = 0;
        for(auto i:left){
            maximum_index=max(maximum_index,i);
        }
        
        for(auto i:right){
            maximum_index=max(maximum_index,n-i);
        }
        return maximum_index;
    }
};
    