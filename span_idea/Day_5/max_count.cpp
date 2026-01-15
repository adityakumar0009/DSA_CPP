#include<iostream>
#include<vector>
using namespace std;
int max_count(vector<int>& nums){
    int count_p = 0;
    int count_N = 0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]<0){
            count_N++;
        }
        else{
            count_p++;
        }
    }
    return max(count_p,count_N);
}
int main(){
    vector<int> nums = {-2, -1, -1, 1, 2, 3};
    cout << "the maximum between the number of positive integers and the number of negative integer " << max_count(nums);
    return 0;
}