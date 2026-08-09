#include<iostream>
#include<vector>
using namespace std;
int best_time(vector<int>& ans){
    int max_profit = 0;
    int best_buy = ans[0];
    for(int i=0; i<ans.size(); i++){
        if(ans[i]>best_buy){
            max_profit = max(max_profit,ans[i]-best_buy);
        }
        best_buy = min(best_buy,ans[i]);
    }
    return max_profit;
}
int main(){
    vector<int> ans = {7, 1, 5, 3, 6, 4};
    cout<<"max_profit of buying stock is "<<best_time(ans);
    return 0;
}