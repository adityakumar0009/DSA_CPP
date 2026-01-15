#include<iostream>
#include<vector>
using namespace std;
int largest_perimeter(vector<int>& nums){
    int n = nums.size();
    for(int i=n-3; i>=0; i--){
        if(nums[i]+nums[i+1]>nums[i+2]){
            return nums[i]+nums[i+1]+nums[i+2];
        }
    }
    return 0;
}
int main(){
    vector<int> nums = {2, 1, 2};
    cout<<"Largest perimeter of triangle is "<<largest_perimeter(nums);
    return 0;
}