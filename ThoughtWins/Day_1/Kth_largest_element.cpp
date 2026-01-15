#include<iostream>
#include<vector>
#include <queue>
using namespace std;
int find_K_greatest(vector<int>& nums,int k){
    priority_queue<int,vector<int>,greater<int>> pq; 
    // by default max-heap
    for(int i=0; i<nums.size(); i++){
        pq.push(nums[i]);
        if(pq.size()>k){
            pq.pop();
        }
    }
    return pq.top();
}
int main(){
    vector<int> nums = {3, 2, 1, 5, 6, 4};
    int k = 2;
    cout<<"The greatest K element is "<<find_K_greatest(nums,k);
    return 0;
}