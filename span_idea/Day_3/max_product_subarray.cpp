#include<iostream>
#include<vector>
using namespace std;
int max_product(vector<int>& nums){
    int max_pro = nums[0];
    int min_pro = nums[0];
    int result = nums[0];
    for(int i=1; i<nums.size(); i++){
        int curr = nums[i];
        if(curr<0){
            swap(max_pro,min_pro);
        }
        min_pro = min(curr, min_pro * curr);
        max_pro = max(curr, max_pro * curr);
        result = max(result, max_pro);
    }
    return result;
}
int main(){
    vector<int> nums = {2,3,-2,4};
    cout<<"Max_pro subarray is "<<max_product(nums);
    return 0;
}