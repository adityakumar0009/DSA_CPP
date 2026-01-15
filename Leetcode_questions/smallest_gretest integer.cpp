#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int missing_integer(vector<int> &nums){
    int sum = nums[0];
    int n = nums.size();
    unordered_set<int> s(nums.begin(),nums.end());
    for(int i=1; i<n; i++){
        if(nums[i]==nums[i-1]+1){
            sum+=nums[i];
        }
        else{
            break;
        }
    }
    return sum;
}
int main(){
    vector<int> nums = {1, 2, 3, 2, 5};
    cout<<"smallest missing integer is -> "<<missing_integer(nums);
    return 0;
}