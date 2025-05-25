#include<iostream>
#include<vector>
using namespace std;
vector<int> product_array_itself(vector<int>& nums){
    int n = nums.size();
    vector<int> ans(n,1);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i!=j){
                ans[i]*=nums[j];
            }
        }
    }
    return ans;
}
int main(){
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = product_array_itself(nums);
    //product of an array
    for(int val : result){
        cout<<val<<" ";
    }
    return 0;
}