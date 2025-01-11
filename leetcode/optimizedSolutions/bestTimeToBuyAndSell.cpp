class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int l = 0, r = 1, mp = 0;
        while (r < prices.size())
        {
            if (prices[r] < prices[l]) l = r;
            else mp = max(mp, prices[r] - prices[l]);
            r++;
        }
        return mp;
    }
};

