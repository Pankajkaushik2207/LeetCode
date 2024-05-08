class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<pair<int, int>> indexedScores; // Pair of (score, index)
        for (int i = 0; i < score.size(); ++i) {
            indexedScores.push_back({score[i], i});
        }
        
        sort(indexedScores.begin(), indexedScores.end(), greater<pair<int, int>>()); // Sort in descending order
        
        vector<string> ans(score.size());
        for (int i = 0; i < indexedScores.size(); ++i) {
            int originalIndex = indexedScores[i].second;
            if (i == 0) {
                ans[originalIndex] = "Gold Medal";
            } else if (i == 1) {
                ans[originalIndex] = "Silver Medal";
            } else if (i == 2) {
                ans[originalIndex] = "Bronze Medal";
            } else {
                ans[originalIndex] = to_string(i + 1); // Convert rank to string
            }
        }
        
        return ans;
    }
};