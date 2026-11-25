class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //if(prices.empty() || prices.size() <= 1) return 0;
        
        int * left = &prices[0];
        int max_benefit = 0;
        
        for(int i = 1; i < prices.size(); ++i){
            if(prices[i] < *left) left = &prices[i];

            if(prices[i] - *left > max_benefit)
                max_benefit = prices[i] - *left;
        }

        return max_benefit;
    }
};
