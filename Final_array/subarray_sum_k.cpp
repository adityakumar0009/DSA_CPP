#include<iostream>
#include<vector>
using namespace std;
int subarray_sum(vector<int>& nums,int k){
    int n = nums.size();
    int count = 0;
    for(int i = 0; i<n; i++){
        int sum = 0;
        for(int j=i ;j<n; j++){
            sum+=nums[j];
            if(sum==k){
                count++;
            }
        }
    }
    return count;
}
int main(){
    vector<int> nums = {1, 1, 1};
    int k = 2;
    cout<<"Maximum subbarray sum is "<<subarray_sum(nums,k);
    return 0;
}