#include<iostream>
using namespace std;
void insertion_sort(int arr[], int n){
    for(int i=1; i<n; i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]>=curr){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }
}
int main(){
    int n =6;
    int arr[] = {4,1,6,3,2,5};
    insertion_sort(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}