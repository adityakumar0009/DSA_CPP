#include<iostream>
#include<vector>
using namespace std;
vector<int> bit_count(int n){
    vector<int> result(n+1);
    for(int i=0; i<=n; i++){
        result[i] = __builtin_popcount(i);
    }
    return result;
}
int main(){
    int n = 3;
    vector<int> ans = bit_count(n);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}