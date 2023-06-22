class Solution {
public:
    int maxProfit(std::vector<int>& prices, int fee) {
        int free = 0;
        int hold = -prices[0];
        for (int i : prices) {
            int tmp = hold;
            hold = std::max(hold, free - i);
            free = std::max(free, tmp + i - fee);
        }
        return free;
    }
};