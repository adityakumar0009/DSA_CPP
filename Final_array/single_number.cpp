#include<iostream>
#include<vector>
using namespace std;
int single_number(vector<int>& nums){
    int single = 0;
    for(int i=0; i<nums.size(); i++){
        single^=nums[i];
    }
    return single;
}
int main(){
    vector<int> nums = {4, 1, 2, 1, 2};
    cout<<"The single number is "<<single_number(nums);
    return 0;
}