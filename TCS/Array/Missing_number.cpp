#include<iostream>
#include<vector>
using namespace std;
int missing_number(vector<int>& nums){
    int sum = 0;
    int n = nums.size();
    for(int i=0; i<nums.size(); i++){
        sum+=nums[i];
    }
    int actual_sum = n*(n+1)/2;
    return actual_sum-sum;
}
int main(){
    vector<int> nums = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    cout<<"Missing number is "<<missing_number(nums);
    return 0;
}