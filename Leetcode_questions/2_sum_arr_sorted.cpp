#include<iostream>
#include<vector>
using namespace std;
vector<int> twosum(vector<int> &nums, int target){
    int n = nums.size();
    int st = 0;
    int end = n-1;
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
    vector<int> result = twosum(nums, target);
    for(int index : result){
        cout<<index<<" ";
    }
    cout<<endl;
    return 0;
}