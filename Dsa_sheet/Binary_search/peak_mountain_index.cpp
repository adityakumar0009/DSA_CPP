#include<iostream>
#include<vector>
using namespace std;
int mountain_index(vector<int> &nums){
    int st = 1;
    int end = nums.size()-2;
    while (st<=end){
        int mid = st+(end-st)/2;
        if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
            return mid;
        }
        else if(nums[mid]>nums[mid-1]){
            st = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int> nums = {0, 10, 15, 2};
    cout<<"peak mountain index is -> "<<mountain_index(nums);
    return 0;
}