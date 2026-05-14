#include<iostream>
#include<vector>
using namespace std;
int single_number(vector<int>& nums){
    int single_number = 0;
    for(int i=0; i<nums.size(); i++){
        single_number^=nums[i];
    }
    return single_number;
}
int main(){
    vector<int> nums = {2, 2, 1};
    cout<<"Single number is "<<single_number(nums);
    return 0;
}