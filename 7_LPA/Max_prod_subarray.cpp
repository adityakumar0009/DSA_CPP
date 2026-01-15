#include<iostream>
#include<vector>
using namespace std;
int max_product(vector<int>& nums){
    int max_prod = nums[0];
    int min_prod = nums[0];
    int result = nums[0];
    for(int i=1; i<nums.size(); i++){
        int curr = nums[i];
        if(curr<0){
            swap(max_prod,min_prod);
        }
        min_prod = min(curr, min_prod * curr);
        max_prod = max(curr, max_prod * curr);
        result = max(result, max_prod);
    }
    return result;
}
int main(){
    vector<int> nums = {2, 3, -2, 4};
    cout<<"Maximum product subarray is "<<max_product(nums);
    return 0;
}