class Solution {
public:
    bool isvalid(int mid,vector<int>&weights,int days){
        int sum=0;
        int ans=1;
        for(auto x: weights){
            sum+=x;
            if(x>mid){
                return false;
            }
            if(sum>mid){
                ans++;
                sum=x;
            }
        }
        if(ans<=days){
            return true;
        }
        return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        //we can use binary search as because if ship can ship W weigh in d days then we check for it can ship 
        //0-W-1 weight and find the optimal answer
        //to find days required we can mid=capacity and find if sum how many days required to ship all
        //if days are less than equal days given we return true else false
        int lo=1;
        int hi=0;
        for(auto x: weights){
            hi+=x;
        }
        int ans=hi;
        
        while(hi>=lo){
            int mid=lo+(hi-lo)/2;
            if(isvalid(mid,weights,days)){
                ans=mid;
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        return ans;
    }
};