#include<iostream>
using namespace std;
void wave_sort(int arr[], int n){
    for(int i=1; i<n; i+=2){
        if(arr[i]>arr[i-1]){
            swap(arr[i],arr[i-1]);
        }
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int arr[]= {1,3,4,7,5,6,2};
    wave_sort(arr,7);
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}