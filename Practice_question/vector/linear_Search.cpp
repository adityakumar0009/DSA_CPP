#include<iostream>
#include<vector>
using namespace std;
int linear_search(vector<int> nums, int target){
    for(int i=0; i<nums.size(); i++){
        if(nums[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int> nums = {2,3,6,4,8};
    int target;
    cout<<"enter the target->";
    cin>>target;
    cout<<linear_search(nums,target);
    return 0;
}