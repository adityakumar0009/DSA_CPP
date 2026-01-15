#include<iostream>
#include<vector>
using namespace std;
int remove_elements(vector<int>& nums){
    if(nums.size()<2){
        return nums.size();
    }
    int i = 2;
    for(int j=2; j<nums.size(); j++){
        if(nums[j]!=nums[i-2]){
            nums[i] = nums[j];
            i++;
        }
    }
    return i;
}
int main(){
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    cout<<"After removing elements became "<<remove_elements(nums);
    return 0;
}