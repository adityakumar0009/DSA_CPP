#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool canpick(vector<int>& nums,int k, int mid){
    int count = 1;
    int prev = nums[0];
    for(int i=1; i<nums.size(); i++){
        if(nums[i]-prev>=mid){
            count++;
            prev = nums[i];
            if(count==k){
                return true;
            }
        }
    }
    return false;
}
int max_tastiness_candy(vector<int>& nums,int k){
    sort(nums.begin(),nums.end());
    int ans = 0;
    int st =0;
    int end = nums.back() - nums.front();;
    while(st<=end){
        int mid  = st + (end-st)/2;
        if(canpick(nums,k,mid)){
            ans = mid;
            st = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return ans;
}
int main(){
    vector<int> nums = {13, 5, 1, 8, 21, 2};
    int k = 3;
    cout<<"Max tastiness of candy is "<<max_tastiness_candy(nums,k);
    return 0;
}