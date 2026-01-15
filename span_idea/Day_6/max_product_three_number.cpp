#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int max_product(vector<int>& nums){
    int max_prod = INT_MIN;
    for(int i=0; i<=nums.size()-3; i++){
        int prod = nums[i]*nums[i+1]*nums[i+2];
        max_prod = max(max_prod,prod);
    }
    return max_prod;
}
int main(){
    vector<int> nums = {1,2,3};
    cout<<"Maximum product of three number is "<<max_product(nums);
    return 0;
}