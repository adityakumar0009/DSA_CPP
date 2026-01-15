#include<iostream>
#include<vector>
using namespace std;
int pivot_index(vector<int>& nums){
    int sum = 0;
    for(int i=0; i<nums.size(); i++){
        sum+=nums[i];
    }
    int cs = 0;
    for(int i=0; i<nums.size(); i++){
        int ls = cs;
        int rs = sum-ls-nums[i];
        if(ls==rs){
            return i;
        }
        cs+=nums[i];
    }
    return -1;
}
int main(){
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    cout<<"Pivot index is "<<pivot_index(nums);
    return 0;
}