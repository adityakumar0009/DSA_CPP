#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int subarray_sum(vector<int>& nums,int k){
    int n = nums.size();
    int count = 0;
    vector<int> prefix_sum(n,0);
    prefix_sum[0] = nums[0];
    for(int i=1; i<n; i++){
        prefix_sum[i] = prefix_sum[i-1]+nums[i];
    }
    unordered_map<int,int> m;//pref_sum,freq
    for(int j=0; j<n; j++){
        if(prefix_sum[j]==k){
            count++;
        }
        else{
            int val = prefix_sum[j]-k;
            if(m.find(val)!=m.end()){
                count+=m[val];
            }
        }
        if(m.find(prefix_sum[j])==m.end()){
            m[prefix_sum[j]]=0;
        }
        m[prefix_sum[j]]++;
    }
    return count;
}
int main(){
    vector<int> nums = {1, 1, 1};
    int k = 2;
    cout<<"Subarray sum equal to k is "<<subarray_sum(nums,k);
    return 0;
}