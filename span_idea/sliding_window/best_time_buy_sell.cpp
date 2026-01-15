#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int max_profit(vector<int>& prices){
    int n = prices.size();
    int best_buy = prices[0];
    int max_profit = INT_MIN;
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
    cout<<"best time to buy and sell is "<<max_profit(prices);
    return 0;
}