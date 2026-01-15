#include<iostream>
#include<vector>
using namespace std;
bool is_monotonic(vector<int>& nums){
    int n = nums.size();
    bool is_increasing = false;
    bool is_decreasing = false;
    for(int i=0; i<n; i++){
        if(nums[i]>nums[i+1]){
            is_decreasing = true;
        }
        if(nums[i]<nums[i+1]){
            is_increasing = true;
        }
    }
    if(is_increasing==true && is_decreasing==true){
        return false;
    }
    return true;
}
int main(){
    vector<int> nums = {1, 2, 2, 3};
    if(is_monotonic(nums)){
        cout<<"It is a monotonic array"<<endl;
    }
    else{
        cout<<"It is not a monotonic array"<<endl;
    }
    return 0;
}