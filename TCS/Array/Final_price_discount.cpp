#include<iostream>
#include<vector>
using namespace std;
vector<int> price_discount(vector<int>& nums){
    int n = nums.size();
    vector<int> result = nums;
    for(int i=0; i<nums.size(); i++){
        for(int j=i+1; j<n; j++){
            if(nums[i]>=nums[j]){
                result[i] = nums[i]-nums[j];
                break;
            }
        }
    }
    return result;
}
int main(){
    vector<int> nums = {8, 4, 6, 2, 3};
    vector<int> ans = price_discount(nums);
    for(int i=0; i<=nums.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}