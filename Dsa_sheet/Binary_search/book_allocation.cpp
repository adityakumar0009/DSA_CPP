#include<iostream>
#include<vector>
using namespace std;
bool is_valid(vector<int> &nums,int n, int m,int max_allowed_pages){
    int student = 1;
    int pages = 0;
    for(int i=0; i<n; i++){
        if(pages+nums[i]<=max_allowed_pages){
            pages+=nums[i];
        }
        else{
            student++;
            pages = nums[i];
        }
    }
    return student>m ? false:true;
}
int book_allocation(vector<int> &nums,int n ,int m){
    if(m>n){
        return -1;
    }
    int ans = -1;
    int sum = 0;
    for(int i=0; i<nums.size(); i++){
        sum+=nums[i];
    }
    int st = 0;
    int end = sum;
    while(st<=end){
        int mid = st + (end-st)/2;
        if(is_valid(nums,n,m,mid)){
            ans = mid;
            end = mid-1;
        }
        else{
            st = mid+1;
        }
    }
    return ans;
};
int main(){
    vector<int> nums = {15,17,20};
    int n = 3;
    int m = 2;
    cout<<"book_allocation is->"<<book_allocation(nums,n,m);
    return 0;
}