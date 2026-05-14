#include<iostream>
#include<climits>
using namespace std;
int second_largest(int arr[],int n){
    int largest = INT_MIN;
    int second_lar = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            second_lar = largest;
            largest = arr[i];
        }
        else if(arr[i]>second_lar && arr[i]!=largest){
            second_lar = arr[i];
        }
    }
    return second_lar;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Second largest number is "<<second_largest(arr,n);
    return 0;
}