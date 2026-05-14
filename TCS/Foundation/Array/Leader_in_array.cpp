#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
vector<int> leader_array(vector<int>& arr){
    vector<int> ans;
    int n = arr.size();
    int maxi = INT_MIN;
    for(int i=n-1; i>=0; i--){
        if(arr[i]>maxi){
            ans.push_back(arr[i]);
            maxi = max(maxi,arr[i]);
            reverse(ans.begin(),ans.end());
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {10,22,12,3,0,6};
    vector<int> leader = leader_array(arr);
    for(int i=0; i<leader.size(); i++){
        cout<<leader[i]<<" ";
    }
    return 0;
}