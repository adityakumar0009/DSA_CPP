#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int subarray_div_by_k(vector<int>& nums,int k){
    int sum = 0;
    int n = nums.size();
    int count = 0;
    unordered_map<int,int> m;
    m[0] = 1;
    for(int i=0; i<n; i++){
        sum+=nums[i];
        int rem = sum%k;
        if(rem<0){
            rem = rem+k;
        }
        if(m.find(rem)!=m.end()){
            count+=m[rem];
        }
        m[rem]++;
    }
    return count;
}
int main(){
    vector<int> nums = {4,5,0,-2,-3,1};
    int k = 5;
    cout<<"subarray div by k is "<<subarray_div_by_k(nums,k);
    return 0;
}