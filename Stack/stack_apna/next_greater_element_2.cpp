#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {1,2,3,4,3};
    int n = nums.size();
    stack<int> s;
    vector<int> ans(n,-1);
    for(int i=2*n-1; i>=0; i--){
        while(s.size()>0 && nums[s.top()]<=nums[i%n]){
            s.pop();
        }
        ans[i%n] = s.empty()?-1:nums[s.top()];
        s.push(i%n);
    }
    for(int val:ans){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}