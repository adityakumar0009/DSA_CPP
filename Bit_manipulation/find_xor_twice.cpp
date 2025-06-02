#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int duplicate_xor(vector<int>& nums){
    sort(nums.begin(),nums.end());
    int result = 0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]==nums[i-1]){
            result^=nums[i];
        }
        while(i+1<nums.size() && nums[i]==nums[i-1]){
            i++;
        }
    }
    return result;
}
int main(){
    vector<int> nums = {1, 2, 1, 3};
    cout << "the XOR of Numbers Which Appear Twice "<<duplicate_xor(nums);
    return 0;
}