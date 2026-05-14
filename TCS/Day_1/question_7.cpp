#include<iostream>
#include<vector>
using namespace std;
int sum_number(vector<int>& nums){
    int sum = 0;
    for(int i=0; i<nums.size(); i++){
        sum+=nums[i];
    }
    return sum;
}
int main(){
    vector<int> nums = {1,2,3};
    cout<<"Sum of number is "<<sum_number(nums);
    return 0;
}