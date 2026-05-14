#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int larget_perimeter(vector<int>& nums){
    int n = nums.size();
    sort(nums.begin(),nums.end());
    for(int i=n-3; i>=0; i--){
        if(nums[i]+nums[i+1]>nums[i+2]){
            return nums[i]+nums[i+1]+nums[i+2];
        }
    }
    return 0;
}
int main(){
    vector<int> nums = {2, 1, 2};
    cout<<"Largest perimeter traingle is "<<larget_perimeter(nums)<<endl;
    return 0;
}