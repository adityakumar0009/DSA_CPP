#include<iostream>
using namespace std;
bool binarysearch(int arr[], int s, int e, int k){
    //base case
    if(s>e){
        return false;
    }
    int mid = s + (e-s)/2;
    if(arr[mid]==k){
        return true;
    }
    if(arr[mid]<e){
        return binarysearch(arr,mid+1,e,k);
    }
    else{
        return binarysearch(arr,mid-1,s,k);
    }
}
int main(){
    int arr[6] = {2,4,6,10,14,18};
    int size = 6;
    int key = 14;
    cout<<"present or not"<<binarysearch(arr,0,5,key)<<endl;
    return 0;
}