class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>mh;
        for(int i=0;i<piles.size();i++){
            mh.push(piles[i]);
        }
        
        while(k--){
            int maxElement = mh.top();
            mh.pop();
            maxElement = maxElement -floor(maxElement/2);
            mh.push(maxElement);
        }
        
        int sum=0;
        for(int i=0;i<piles.size();i++){
            int temp = mh.top();
            mh.pop();
            sum+=temp;
        }
        return sum;
            
    }
};