#include<iostream>
#include<vector>
using namespace std;
long long zero_filled(vector<int>& nums){
    long long result = 0;
    long long l = 0;
    int n = nums.size();
    for(int i=0; i<n; i++){
        if(nums[i]==0){
            l++;
        }
        else{
            l = 0;
        }
        result=result+l;
    }
    return result;
}
int main(){
    vector<int> nums = {1, 3, 0, 0, 2, 0, 0, 4};
    cout<<"Zero filled subarray is "<<zero_filled(nums);
    return 0;
}