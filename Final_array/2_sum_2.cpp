#include<iostream>
#include<vector>
using namespace std;
vector<int> two_sum(vector<int>& nums,int target){
    int st = 0;
    int end = nums.size()-1;
    while(st<end){
        int sum = nums[st] + nums[end];
        if(sum==target){
            return {st+1,end+1};
        }
        else if(sum<target){
            st++;
        }
        else{
            end--;
        }
    }
    return {};
}
int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = two_sum(nums,target);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}