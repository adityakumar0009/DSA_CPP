#include<iostream>
#include<deque>
#include<vector>
using namespace std;
vector<int> max_sliding_window(vector<int>& nums,int k){
    deque<int> dq;
    vector<int> res;
    //first sliding window
    for(int i=0; i<k; i++){
        while(dq.size()>0 && nums[dq.back()]<=nums[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    for(int i=k; i<nums.size(); i++){
        res.push_back(nums[dq.front()]);
        // remove the element which is not present in window
        while (dq.size() > 0 && dq.front() <= i - k)
        {
            dq.pop_front();
    }
    //remove smaller element
    while(dq.size()>0 && nums[dq.back()]<=nums[i]){
        dq.pop_back();
    }
    
    dq.push_back(i);
    }
    res.push_back(nums[dq.front()]);
    return res;
}
int main(){
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    vector<int> ans = max_sliding_window(nums,k);
    cout<<"maximum sliding window is -> ";
    for(int nums : ans){
        cout<<nums<<" ";
    }
    cout<<endl;
    return 0;
}