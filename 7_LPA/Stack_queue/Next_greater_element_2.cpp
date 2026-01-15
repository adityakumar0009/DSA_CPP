#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> next_greater(vector<int>& nums){
    stack<int> s;
    int n = nums.size();
    vector<int> ans(n,-1);
    for(int i=2*n-1; i>=0; i--){
        while(s.size()>0 && nums[s.top()]<=nums[i%n]){
            s.pop();
        }
        if(s.empty()){
            ans[i%n] = -1;
        }
        else{
            ans[i%n] = nums[s.top()];
        }
        s.push(i % n);
    }
    return ans;
}
int main(){
    vector<int> nums = {1, 2, 1};
    vector<int> result = next_greater(nums);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}