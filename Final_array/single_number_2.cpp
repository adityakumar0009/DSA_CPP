#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int single_number(vector<int>& nums){
    sort(nums.begin(),nums.end());
    for(int i=0; i<nums.size(); i+=3){
        if(nums[i]!=nums[i+1]){
            return nums[i];
        }
    }
    return nums[nums.size()-1];
}
int main(){
    vector<int> nums = {2, 2, 3, 2};
    cout<<"The single element is "<<single_number(nums);
    return 0;
}