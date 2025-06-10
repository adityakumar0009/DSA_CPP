#include<iostream>
#include<vector>
using namespace std;
int sub_array(vector<int>& nums,int k){
    int count = 0;
    for(int i=0; i<nums.size(); i++){//starting point
        int sum = 0;
        for(int j=i; j<nums.size(); j++){//ending point
            sum+=nums[i];
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
    cout<<"max subarray sum equal to k is "<<sub_array(nums,k);
    return 0;
}