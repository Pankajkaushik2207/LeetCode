
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
         int maxi = INT_MIN;
    
        for (int candy : candies) {
            maxi = max(maxi, candy);
        }
        
        vector<bool> result;
        for (int candy : candies) {
            result.push_back(candy + extraCandies >= maxi);
        }
        
        return result;
    }
};