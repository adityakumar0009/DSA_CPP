#include<iostream>
#include<vector>
using namespace std;
int sub_arr_sum(vector<int>& nums,int k){
    int count = 0;
    int n = nums.size();
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum+=nums[j];
            if(sum==k){
                count++;
            }
        }
    }
    return count;
}
int main(){
    vector<int> nums = {1, 2, 3};
    int k = 3;
    cout<<"Subarray sum equal to k is "<<sub_arr_sum(nums,k);
    return 0;
}