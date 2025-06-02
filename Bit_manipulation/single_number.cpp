#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int>& nums){
    int single_number = 0;
    for(int i=0;i <nums.size(); i++){
        single_number^=nums[i];
    }
    return single_number;
}
int main(){
    vector<int> nums = {4, 1, 2, 1, 2};
    cout<<"single number is "<<singleNumber(nums);
    return 0;
}