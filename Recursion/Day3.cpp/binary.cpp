#include<iostream>
using namespace std;
void print(int arr[], int s, int e){
    for(int i =s; i<=e; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool isbinarysearch(int arr[], int s, int e, int k){
    print(arr,s,e);
    //base case
    if(s>e){
        return false;
    }
    int mid = s+(e-s)/2;
    if(arr[mid] == k){
        return true;
    }
    if(arr[mid]<k){
        return isbinarysearch(arr,mid+1,e,k);
    }
    else{
        return isbinarysearch(arr,s,mid-1,k);
    }
}
int main(){
    int arr[6] = {2,4,5,6,8,9};
    int size = 6;
    int key = 9;
    cout<<"present or not "<<isbinarysearch(arr,0,5,key)<<endl;;
}