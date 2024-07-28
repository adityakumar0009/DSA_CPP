#include<iostream>
using namespace std;
int duplicates(int arr[],int size){
    int ans = 0;
    for(int i=0; i<size; i++){
        ans = ans^arr[i];
    }
    for(int i=0; i<size; i++){
        ans = ans^i;
    }
    return ans;
}
int printarr(int arr[], int n){
    for(int i=0;i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int brr[3] ={1,2,2};
    int dup = duplicates(brr,3);
    cout<<"duplicates value are->"<<dup<<endl;
    printarr(brr,3);
    return 0;
}