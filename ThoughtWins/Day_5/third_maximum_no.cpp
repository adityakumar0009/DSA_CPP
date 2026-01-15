#include<iostream>
#include<vector>
#include<queue>
#include<unordered_set>
using namespace std;
int third_maximum(vector<int>& nums){
    unordered_set<int> seen;
    for(int i=0; i<nums.size(); i++){
        if(seen.find(nums[i])==seen.end()){
            seen.insert(nums[i]);
        }
    }
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int num : seen){
        pq.push(num);
        if(pq.size()>3){
            pq.pop();
        }
    }
    if(pq.size()<3){
        while(pq.size()>1){
            pq.pop();
        }
    }
    return pq.top();
}
int main(){
    vector<int> nums = {3, 2, 1};
    cout<<"The third maximum element is "<<third_maximum(nums);
    return 0;
}