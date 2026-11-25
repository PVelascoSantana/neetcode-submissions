class Solution {
public:
    int maxProfit(vector<int>& prices) {        
        //int * left = &prices[0];
        int max_benefit = 0;
        int best_price = prices[0];
        
        for(int i = 1; i < prices.size(); ++i){
            if(prices[i] < best_price) best_price = prices[i];

            if(prices[i] - best_price > max_benefit)
                max_benefit = prices[i] - best_price;
        }

        return max_benefit;
    }
};
