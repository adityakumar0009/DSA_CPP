#include<iostream>
#include<vector>
using namespace std;
int single_number(vector<int> &nums){
    int ans = 0;
    for(int i=0; i<nums.size(); i++){
        ans=ans^nums[i];
    }
    return ans;
}
int main(){
    vector<int> nums = {1,2,2,1,3};
    cout<<"single_number is-> "<<single_number(nums);
    return 0;
}