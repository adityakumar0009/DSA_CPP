#include<iostream>
#include<vector>
using namespace std;
vector<int> xorQueries(vector<int>& arr,vector<vector<int>>& queries){
    int n = arr.size();
    vector<int> comm_xor(n,0);
    comm_xor[0] = arr[0];
    for(int i=1; i<n; i++){
        comm_xor[i] = comm_xor[i-1]^arr[i];
    }
    vector<int> result;
    for(vector<int>& query : queries){
        int L = query[0];
        int R = query[1];
        if(L==0){
            result.push_back(comm_xor[R]);
        }
        else{
            result.push_back(comm_xor[R]^comm_xor[L-1]);
        }
    }
    return result;
}
int main(){
    vector<int> arr = {1, 3, 4, 8};
    vector<vector<int>> queries = {{0,1},{1,2},{0,3},{3,3}};
    vector<int> ans = xorQueries(arr,queries);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}