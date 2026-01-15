#include<iostream>
#include<vector>
using namespace std;
int min_element(vector<int>& nums){
    int st = 0;
    int end = nums.size()-1;
    while(st<end){
        int mid = st+(end-st)/2;
        if(nums[mid]>nums[end]){
            st = mid + 1;
        }
        else{
            end = mid;
        }
    }
    return nums[st];
}
int main(){
    vector<int> nums = {3, 4, 5, 1, 2};
    cout<<"The minimum element present in the vector is "<<min_element(nums);
    return 0;
}