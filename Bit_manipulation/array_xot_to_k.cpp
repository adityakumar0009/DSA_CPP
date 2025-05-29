#include<iostream>
#include<vector>
using namespace std;
int minopertaion(vector<int>& nums,int k){
    int total_xor = 0;
    for(int i=0; i<nums.size(); i++){
        total_xor^=nums[i];
    }
    int diff = total_xor ^ k;
    return __builtin_popcount(diff);
}
int main(){
    vector<int> nums = {2, 1, 3, 4};
    int k =1;
    cout<<"minimum opertaion required is "<<minopertaion(nums,k);
    return 0;
}