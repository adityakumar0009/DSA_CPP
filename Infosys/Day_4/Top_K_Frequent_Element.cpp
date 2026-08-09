#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<unordered_map>
using namespace std;
vector<int> Top_k_Freq(vector<int>& arr,int k){
    unordered_map<int,int> m;
    for(int i=0; i<arr.size(); i++){
        m[arr[i]]++;
    }
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    for(auto it : m){
        pq.push({it.second,it.first});
        if(pq.size()>k){
            pq.pop();
        }
    }
    vector<int> result;
    while(pq.size()>0){
        result.push_back(pq.top().second);
        pq.pop();
    }
    reverse(result.begin(), result.end());
    return result;
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

    vector<int> ans = Top_k_Freq(arr,k);
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}