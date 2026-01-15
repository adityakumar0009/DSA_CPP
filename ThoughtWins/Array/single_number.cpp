#include<iostream>
#include<vector>
using namespace std;
int single_element(vector<int>& nums){
    int single_no = 0;
    for(int i=0; i<nums.size(); i++){
        single_no^=nums[i];
    }
    return single_no;
}
int main(){
    vector<int> nums = {1,2,1};
    cout<<"single element is "<<single_element(nums);
    return 0;
}