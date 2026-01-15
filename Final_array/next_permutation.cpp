#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void next_permutation(vector<int>& nums){
    int n = nums.size();
    int pivot = -1;
    for(int i=n-2; i>=0; i--){
        if(nums[i]<nums[i+1]){
            pivot = i;
            break;
        }
    }
    if(pivot==-1){
        reverse(nums.begin(),nums.end());
    }
    for(int i=n-1; i>=pivot; i--){
        if(nums[i]>nums[pivot]){
            swap(nums[i],nums[pivot]);
        }
    }
    reverse(nums.begin()+pivot+1,nums.end());
}
int main(){
    vector<int> nums = {1,2,3};
    next_permutation(nums);
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}