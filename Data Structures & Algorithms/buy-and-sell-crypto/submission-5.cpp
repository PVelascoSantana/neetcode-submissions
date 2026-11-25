class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty() || prices.size() <= 1) return 0;
        
        int * left = &prices[0];
        int max_benefit = 0;
        int current_benefit = 0;
        
        for(int i = prices.size() - 1; i > 0; --i){
            left = &prices[0];
            //current_benefit = prices[i] - *left;

            while(left < &prices[i]){
                current_benefit = prices[i] - *left;
                
                if(current_benefit > max_benefit){
                    max_benefit = current_benefit;
                    left++;
                    continue;
                }
                
                left++;
            }
        }
        return max_benefit;
    }
};
