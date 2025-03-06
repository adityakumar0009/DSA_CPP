#include<iostream>
#include<vector>
using namespace std;
int peak_element(vector<int> &nums){
    int st = 0;
    int end = nums.size()-1;
    while(st<end){
        int mid = st+(end-st)/2;
        if(nums[mid]>nums[mid+1]){
            end = mid;
        }
        else{
            st = mid+1;
        }
    }
    return st;
}
int main(){
    vector<int> nums = {1, 2, 1, 3, 5, 6, 4};
    cout<<"peak element is -> "<<peak_element(nums);
    return 0;
}