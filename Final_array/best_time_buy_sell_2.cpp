#include<iostream>
#include<vector>
using namespace std;
int best_time_buy_sell(vector<int>& nums){
    int profit = 0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]>nums[i-1]){
            profit+=nums[i]-nums[i-1];
        }
    }
    return profit;
}
int main(){
    vector<int> nums = {7, 1, 5, 3, 6, 4};
    cout<<"The profit is "<<best_time_buy_sell(nums);
    return 0;
}