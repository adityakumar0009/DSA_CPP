#include<iostream>
#include<vector>
using namespace std;
int missing_number(vector<int>& nums){
    int n= nums.size();
    int miss_no =0 ;
    for(int i=0; i<n; i++){
        miss_no^=i^nums[i];
    }
    return miss_no^=n;
}
int main(){
    vector<int> nums = {3,0,1};
    cout<<"missing number is "<<missing_number(nums);
    return 0;
}