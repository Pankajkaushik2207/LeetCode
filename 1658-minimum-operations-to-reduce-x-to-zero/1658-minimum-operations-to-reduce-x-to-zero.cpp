#include <vector>
#include <unordered_map>
#include <numeric>
#include <climits>

class Solution {
public:
    int minOperations(std::vector<int>& nums, int x) {
     int target = std::accumulate(nums.begin(), nums.end(), 0LL) - static_cast<long long>(x);

        if (target == 0) {
            return nums.size(); // The entire array should be removed.
        }
        
        std::unordered_map<int, int> prefixSum;
        prefixSum[0] = -1;
        int sum = 0;
        int maxLength = INT_MIN;
        
        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i];
            if (prefixSum.find(sum - target) != prefixSum.end()) {
                int subarrayLength = i - prefixSum[sum - target];
                maxLength = std::max(maxLength, subarrayLength);
            }
            prefixSum[sum] = i;
        }
        
        if (maxLength == INT_MIN) {
            return -1; // No subarray found.
        }
        
        return nums.size() - maxLength;
    }
};
