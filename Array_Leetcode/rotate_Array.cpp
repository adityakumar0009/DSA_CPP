#include<iostream>
#include<vector>
using namespace std;
void rotate_array(vector<int>& nums,int k){
    vector<int> temp(nums.size());
    for(int i=0; i<nums.size(); i++){
        temp[(i+k)%nums.size()]=nums[i];
    }
    nums = temp;
}
int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    rotate_array(nums,k);
    //rotated array is 
    for(int val : nums){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}