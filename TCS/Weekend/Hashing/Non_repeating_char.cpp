#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    map<int,int> m;
    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }
    for(int i=0; i<n; i++){
        if(m[arr[i]]==1){
            cout<<arr[i]<<" ";
            break;
        }
    }
    return 0;
}