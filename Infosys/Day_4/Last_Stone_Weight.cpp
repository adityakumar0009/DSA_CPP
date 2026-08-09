#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int Last_stone(vector<int>& stones){
    priority_queue<int> pq;
    for(int i=0; i<stones.size(); i++){
        pq.push(stones[i]);
    }
    while(pq.size()>1){
        int first = pq.top();
        pq.pop();
        int second = pq.top();
        pq.pop();
        if(first!=second){
            pq.push(first-second);
        }
    }
    if(pq.empty()){
        return 0;
    }
    return pq.top();
}
int main(){
    vector<int> stones = {2, 7, 4, 1, 8, 1};
    cout<<"Last stone weight is "<<Last_stone(stones);
    return 0;
}