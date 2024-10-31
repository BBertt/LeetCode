class Solution {
public:
    int maxProfit(vector<int>& prices) {   
        int small = 0;
        int maximum = 0;

        for (int i = 0; i < prices.size(); i ++) {
            if (prices[i] < prices[small]) {
                small = i;
            }
            if (i > small) {
                maximum = max(maximum, prices[i] - prices[small]);
            }
        }

        return maximum;
    }
};