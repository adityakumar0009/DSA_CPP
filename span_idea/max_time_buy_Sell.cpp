#include<iostream>
#include<vector>
using namespace std;
int max_profit(vector<int>& nums){
    int profit = 0;
    for(int i=1; i<nums.size(); i++){
        if(nums[i]>nums[i-1]){
            profit+=nums[i]-nums[i-1];
        }
    }
    return profit;
}
int main(){
    vector<int> nums = {7, 1, 5, 3, 6, 4};
    cout<<"max time buy and sell is "<<max_profit(nums);
    return 0;
}