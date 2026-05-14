#include<iostream>
using namespace std;
int binary_search(int arr[],int n,int target){
    int st = 0;
    int end = n-1;
    while(st<end){
        int mid = st+(end-st)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            end = mid-1;
        }
        else{
            st = mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    cout<<"Element found at "<<binary_search(arr,n,target);
    return 0;
}