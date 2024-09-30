#include<iostream>
#include<vector>
using namespace std;
vector<int>pro_arr_self(vector<int> arr){
    int n = arr.size();
    vector<int> ans(n,1);
    for(int i=1; i<n; i++){
        ans[i] = arr[i-1]*arr[n-1];
    }
    int suffix = 1;
    for(int i=n-2; i>=0; i++){
        suffix*=arr[i+1];
        ans[i]*=suffix;
    }
    return ans;
}
int main(){
    vector<int> arr = {2,4,6,8,7};
    vector<int> ans = pro_arr_self(arr);
    for (int i = 0; i <ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}