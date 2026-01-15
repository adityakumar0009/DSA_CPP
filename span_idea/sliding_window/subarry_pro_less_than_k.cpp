#include<iostream>
#include<vector>
using namespace std;
int subarry_pro_k(vector<int>& nums,int k){
    if(k<=1){
        return 0;
    }
    int i = 0;
    int j = 0;
    int n = nums.size();
    int count = 0;
    int prod = 1;
    while(j<n){
        prod*=nums[j];
        if(prod>=k){
            prod = prod/nums[i];
            i++;
        }
        count+=(j-i+1);
        j++;
    }
    return count;
}
int main(){
    vector<int> nums = {10, 5, 2, 6};
    int k = 100;
    cout<<"Subarray product less than k "<<subarry_pro_k(nums,k);
    return 0;
}
