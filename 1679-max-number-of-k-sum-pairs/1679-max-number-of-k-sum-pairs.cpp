class Solution {
public:
    int maxOperations(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> numCount;
        int count = 0;

        for (int num : nums) {
            int complement = k - num;
            if (numCount.find(complement) != numCount.end() && numCount[complement] > 0) {
                count++;
                numCount[complement]--;
            } else {
                numCount[num]++;
            }
        }

        return count;
    }
};