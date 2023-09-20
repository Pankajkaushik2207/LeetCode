#include <vector>
#include <unordered_map>
#include <climits>

class Solution {
public:
    int minOperations(std::vector<int>& nums, int x) {
        int n = nums.size();
        int target = std::accumulate(nums.begin(), nums.end(), 0LL) - static_cast<long long>(x);

        if (target == 0) {
            return n; // The entire array should be removed.
        }

        std::unordered_map<int, int> prefixSum;
        prefixSum[0] = -1;
        int sum = 0;
        int maxLength = INT_MIN;

        for (int i = 0; i < n; ++i) {
            sum += nums[i];
            if (prefixSum.find(sum - target) != prefixSum.end()) {
                int subarrayLength = i - prefixSum[sum - target];
                maxLength = std::max(maxLength, subarrayLength);
            }
            prefixSum[sum] = i;
        }

        return maxLength != INT_MIN ? n - maxLength : -1;
    }
};
