#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int maxi = 0;
    int ans;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    map<int,int> m;
    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }
    for(auto x : m){
        if(x.second>maxi){
            maxi = x.second;
            ans = x.first;
        }
    }
    cout<<ans;
    return 0;
}