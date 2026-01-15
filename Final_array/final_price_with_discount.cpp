#include<iostream>
#include<vector>
using namespace std;
vector<int> final_price(vector<int> prices){
    int n = prices.size();
    vector<int> new_prices = prices;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(prices[i]>prices[j]){
                new_prices[i] = prices[i]-prices[j];
                break;
            }
        }
    }
    return new_prices;
}
int main(){
    vector<int> prices = {8, 4, 6, 2, 3};
    vector<int> result = final_price(prices);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}