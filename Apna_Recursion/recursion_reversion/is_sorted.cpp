#include<iostream>
#include<vector>
using namespace std;
bool is_sorted(vector<int>& arr,int n){
    if(n==0 || n==1){
        return true;
    }
    return arr[n-1]>=arr[n-2] && is_sorted(arr,n-1);
}
int main(){
    vector<int> arr = {1,2,8,4,5};
    cout<<is_sorted(arr,5);
    return 0;
}