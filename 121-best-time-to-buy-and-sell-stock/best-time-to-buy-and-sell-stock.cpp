class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int best_boughtprice = prices[0];
        int max_profit=0;

        for(int i=1;i<n;i++){
            if(prices[i]<best_boughtprice){
                best_boughtprice=prices[i];
            }else{
                max_profit=max(max_profit,prices[i]-best_boughtprice);
            }
        }
    return max_profit;
    }

};