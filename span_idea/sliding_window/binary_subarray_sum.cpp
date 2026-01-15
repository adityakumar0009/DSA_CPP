#include<iostream>
#include<vector>
using namespace std;
int binary_subarray_sum(vector<int>& nums,int goal){
    int n = nums.size();
    int i = 0;
    int j = 0;
    int win_sum = 0;
    int count0 = 0;
    int result = 0;
    while(j<n){
        win_sum+=nums[j];
        while(i<j && (nums[i]==0 || win_sum>goal)){
            if(nums[i]==0){
                count0++;
            }
            else{
                count0 = 0;
            }
            win_sum-=nums[i];
            i++;
        }
        if(win_sum==goal){
            result+=1+count0;
        }
        j++;
    }
    return result;
}
int main(){
    vector<int> nums = {1, 0, 1, 0, 1};
    int goal = 2;
    cout << "the number of non-empty subarrays with a sum goal. "<<binary_subarray_sum(nums,goal);
    return 0;
}