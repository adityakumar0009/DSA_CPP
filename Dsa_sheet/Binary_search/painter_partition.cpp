#include<iostream>
#include<vector>
#include<climits>
using namespace std;
bool is_possible(vector<int> &nums,int n,int m,int maxAllowedTime){
    int painter = 1;
    int time = 0;
    for(int i=0; i<nums.size(); i++){
        if(time+nums[i]<=maxAllowedTime){
            time+=nums[i];
        }
        else{
            painter++;
            time = nums[i];
        }
    }
    return painter<=m;
}
int painter_partition(vector<int> &nums,int n ,int m){
    if(m>n){
        return -1;
    }
    int sum = 0;
    int max_value = INT_MIN;
    int ans = -1;
    for(int i=0; i<nums.size(); i++){
        sum+=nums[i];
        max_value = max(max_value,nums[i]);
    }
    int st = max_value;
    int end = sum;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(is_possible(nums,n,m,mid)){
            ans = mid;
            end = mid-1;
        }
        else{
            st = mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int> nums = {40,30,10,20};
    int n = 4;
    int m = 2;
    cout<<"min_time to paint is"<<painter_partition(nums,n,m);
    return 0;
}