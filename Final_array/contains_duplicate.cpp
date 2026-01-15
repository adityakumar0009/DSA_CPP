#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool duplicate(vector<int>& nums){
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
    if(duplicate(nums)){
        cout<<"duplicate element is present in the array"<<endl;
    }
    else{
        cout<<"Not duplicate element";
    }
    return 0;
}