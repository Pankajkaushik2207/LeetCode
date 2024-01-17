class Solution {
public:
    bool uniqueOccurrences(std::vector<int>& arr) {
        std::unordered_map<int, int> mp;
        
        // Count occurrences of each element
        for(int i = 0; i < arr.size(); ++i) {
            mp[arr[i]]++;
        }

        std::unordered_map<int, int> pk;
        
        // Check if the occurrences are unique
        for(auto& pair : mp) {
            if (pk.find(pair.second) != pk.end()) {
                // If this occurrence count is already in pk, not unique
                return false;
            } else {
                pk[pair.second]++;
            }
        }

        return true;
    }
};