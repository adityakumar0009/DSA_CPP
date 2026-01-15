#include<iostream>
#include<vector>
using namespace std;
int maxProfit(vector<int>& prices){
    int max_profit = 0;
    int best_buy = prices[0];
    for(int i=0; i<prices.size(); i++){
        if(prices[i]>best_buy){
            max_profit = max(max_profit,prices[i]-best_buy);
        }
        best_buy = min(best_buy,prices[i]);
    }
    return max_profit;
}
int main(){
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout<<"Best time to buy and sell is "<<maxProfit(prices);
    return 0;
}