#include<iostream>
using namespace std;
int rem_dup(int arr[],int n){
    if(n==0){
        return 0;
    }
    int x = 1;
    for(int y=1; y<n; y++){
        if(arr[y]!=arr[y-1]){
            arr[x]=arr[y];
            x++;
        }
    }
    return x;
}
int main(){
    int arr[7] = {0,0,1,1,2,3,3};
    int ans = rem_dup(arr,7);
    for(int i=0; i<ans; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}