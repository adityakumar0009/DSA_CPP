#include<iostream>
using namespace std;
int max_count(int arr[],int n){
    int count = 1;
    for(int i=1; i<n; i++){
        if(arr[i]>arr[i-1]){
            count = count+1;
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<max_count(arr,n)<<endl;
    return 0;
}