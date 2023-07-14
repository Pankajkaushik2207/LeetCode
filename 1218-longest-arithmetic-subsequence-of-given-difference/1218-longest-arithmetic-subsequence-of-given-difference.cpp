class Solution {
public:

int longestSubsequence(vector<int>& arr, int diff) {
    unordered_map<int, int> dp;
    int longest = 0;
    
    for (int num : arr) {
        dp[num] = dp[num - diff] + 1;
        longest = max(longest, dp[num]);
    }
    return longest;
}

};