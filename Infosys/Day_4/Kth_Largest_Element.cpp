#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int kth_largest(vector<int>& arr, int k){
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0; i<arr.size(); i++){
        pq.push(arr[i]);
        if(pq.size()>k){
            pq.pop();
        }
    }
    return pq.top();
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<"Kth largest element is "<<kth_largest(arr,k);
    return 0;
}