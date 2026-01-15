#include<iostream>
#include<vector>
using namespace std;
int sub_arr_pro_less_k(vector<int>& nums,int k){
    if(k<=1){
        return 0;
    }
    int count = 0;
    int product = 1;
    int i =0;
    int j=0;
    int n = nums.size();
    while(j<=n){
        product*=nums[j];
        while(product>=k){
            product = product / nums[i];
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
    cout << "the number of contiguous subarrays where the product of all the elements in the subarray is strictly less than k "<<sub_arr_pro_less_k(nums,k);
    return 0;
}