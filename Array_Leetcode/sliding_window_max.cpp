#include<iostream>
#include<vector>
#include<deque>
using namespace std;
vector<int> sliding_window(vector<int>& nums,int k){
    //first window
    int n = nums.size();
    vector<int> result;
    deque<int> q;
    for(int i=0; i<k; i++){
        while(q.size()>0 && nums[q.back()]<=nums[i]){
            q.pop_back();
        }
        q.push_back(i);
    }
    for(int i=k; i<n; i++){
        result.push_back(nums[q.front()]);
        // remove element which is not part of current window
        while(q.size()>0 && q.front()<=i-k){
            q.pop_front();
        }
        //remove smaller values
        while(q.size()>0 && nums[q.back()]<=nums[i]){
            q.pop_back();
        }
        q.push_back(i);
    }
    result.push_back(nums[q.front()]);
    return result;
}
int main(){
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    vector<int> ans = sliding_window(nums,k);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}