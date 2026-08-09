#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int best_time_buy(vector<int>& arr){
    int best_buy = arr[0];
    int max_profit = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]>best_buy){
            max_profit = max(max_profit, arr[i] - best_buy);
        }
        best_buy = min(best_buy,arr[i]);
    }
    return max_profit;
}
int main(){
    vector<int> arr = {7,1,5,3,6,4};
    cout<<"Best time to buy and sell is :- "<<best_time_buy(arr);
    return 0;
}