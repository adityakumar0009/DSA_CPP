#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> two_sum(vector<int>& arr,int target){
    unordered_map<int,int> m;
    vector<int> ans;
    int n = arr.size();
    for(int i=0; i<n ;i++){
        int first = arr[i];
        int second = target-first;
        if(m.find(second)!=m.end()){
            ans.push_back(m[second]);
            ans.push_back(i);
        }
        m[first] = i;
    }
    return ans;
}
int main(){
    vector<int> arr = {2, 7, 11, 15}; 
    int target = 9;
    vector<int> ans = two_sum(arr,target);
    for(int i=0; i<ans.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
