#include<iostream>
#include<vector>
using namespace std;
int max_profit(vector<int>& nums){
    int maxi_pro = 0;
    for(int i=1; i<nums.size(); i++){
        if(nums[i]>nums[i-1]){
            maxi_pro+=nums[i]-nums[i-1];
        }
    }
    return maxi_pro;
}
int main(){
    vector<int> nums = {7, 1, 5, 3, 6, 4};
    cout << "maximum profit we can achieve "<<max_profit(nums);
    return 0;
}