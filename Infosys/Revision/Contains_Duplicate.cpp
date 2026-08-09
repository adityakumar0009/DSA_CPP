#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool contain_dup(vector<int>& nums){
    sort(nums.begin(),nums.end());
    for(int i=1; i<nums.size(); i++){
        if(nums[i]==nums[i-1]){
            return true;
        }
    }
    return false;
}
int main(){
    vector<int> nums = {1, 2, 3, 1};
    if(contain_dup(nums)){
        cout<<"It contains dup";
    }
    else{
        cout<<"It doesnot contain duplicate";
    }
    return 0;
}