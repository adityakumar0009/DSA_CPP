#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int> sliding_window(vector<int>& nums,int k){
    deque<int> dq;
    vector<int> res;
    for(int i=0; i<k; i++){
        while(dq.size()>0 && nums[dq.front()]<=nums[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    for(int i=k; i<nums.size(); i++){
        res.push_back(nums[dq.front()]);
        while(dq.size()>0 && dq.front()<=i-k){
            dq.pop_front();
        }
        while(dq.size()>0 && nums[dq.front()]<=nums[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    res.push_back(nums[dq.front()]);
    return res;
}
int main(){
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k =3;
    vector<int> ans = sliding_window(nums,k);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}