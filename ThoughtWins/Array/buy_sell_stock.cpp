#include<iostream>
#include<vector>
using namespace std;
int maxProfit(vector<int>& nums){
    int n = nums.size();
    int best_buy = nums[0];
    int max_profit = 0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]>best_buy){
            max_profit = max(max_profit,nums[i]-best_buy);
        }
        best_buy = min(best_buy,nums[i]);
    }
    return max_profit;
}
int main(){
    vector<int> nums = {7, 1, 5, 3, 6, 4};
    cout<<"The max profit of buy and sell is "<<maxProfit(nums);
    return 0;
}