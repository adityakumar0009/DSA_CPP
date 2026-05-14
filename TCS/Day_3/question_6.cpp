#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int second_largest(vector<int>& nums){
    int largest = INT_MIN;
    int second_largest = INT_MIN;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]>largest){
            second_largest = largest;
            largest = nums[i];
        }
        else if(nums[i]>second_largest && nums[i]!=largest){
            second_largest = nums[i];
        }
    }
    return second_largest;
}
int main(){
    vector<int> nums = {9,12,8,7,10};
    cout<<"Second Largest number is "<<second_largest(nums);
    return 0;
}