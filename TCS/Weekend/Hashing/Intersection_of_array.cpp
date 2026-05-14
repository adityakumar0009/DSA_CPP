#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    int arr1[n];
    for(int i=0; i<n; i++)
        cin>>arr1[i];
    cin>>m;
    int arr2[m];
    for(int i=0; i<m; i++)
        cin>>arr2[i];
    unordered_set<int> s;
    for(int i=0; i<n; i++){
        s.insert(arr1[i]);
    }
    for(int i=0; i<m; i++){
        if(s.find(arr2[i])!=s.end()){
            cout<<arr2[i]<<" ";
        }
    }
}