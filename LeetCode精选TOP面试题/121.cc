class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() <= 1) return 0;
        vector<int> diff;
        for(int i = 1; i < prices.size(); i++) {
            diff.push_back(prices[i]-prices[i-1]);
        }
        int res = INT_MIN, possible = 0;
        for(int i = 0; i < diff.size(); i++) {
            possible = possible+diff[i] > diff[i] ? possible+diff[i] : diff[i];
            res = possible > res ? possible : res;
        }
        return res > 0 ? res : 0;
    }
};