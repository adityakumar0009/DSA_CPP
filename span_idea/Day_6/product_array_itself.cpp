#include<iostream>
#include<vector>
using namespace std;
vector<int> product_except_itself(vector<int>& nums){
    int n = nums.size();
    vector<int> arr(n,1);
    for(int i=1; i<nums.size(); i++){
        arr[i] = arr[i-1]*nums[i-1];
    }
    int suffix = 1;
    for(int i = nums.size()-2; i>=0; i--){
        suffix*=nums[i+1];
        arr[i]*=suffix;
    }
    return arr;
}
int main(){
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = product_except_itself(nums);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
}