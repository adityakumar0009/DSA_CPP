#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int max_profit(vector<int>& prices){
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
    cout<<"Maximum time to buy and sell stock is "<<max_profit(prices);
    return 0;
}