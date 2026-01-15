#include<iostream>
#include<vector>
using namespace std;
vector<int> apply_operation(vector<int>& nums){
    int n = nums.size();
    for(int i=0; i<nums.size(); i++){
        if(nums[i]==nums[i+1]){
            nums[i] = nums[i]*2;
            nums[i + 1] = 0;
        }
    }
    vector<int> arr(n,0);
    int index = 0;
    for(int i=0; i<n; i++){
        if(nums[i]!=0){
            arr[index++] = nums[i];
        }
    }
    return arr;
}
int main(){
    vector<int> nums = {1, 2, 2, 1, 1, 0};
    vector<int> ans = apply_operation(nums);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}