#include<iostream>
#include<vector>
using namespace std;
void zero(vector<int>& nums){
    int n = nums.size();
    int pos = 0;
    for(int i=0; i<n; i++){
        if(nums[i]!=0){
            nums[pos++] = nums[i];
        }
    }
    while(pos<nums.size()){
        nums[pos++] = 0;
    }
}
int main(){
    vector<int> nums = {0, 1, 0, 3, 12};
    zero(nums);
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}