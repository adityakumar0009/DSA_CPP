#include<iostream>
using namespace std;
bool is_binary(int arr[], int s, int e, int key){
    //base case
    if(s>e){
        return false;
    }
    int mid = s+(e-s)/2;
    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]<key){
        return is_binary(arr,mid+1,e,key);
    }
    else{
        return is_binary(arr,s,mid-1,key);
    }
}
int main(){
    int arr[5] = {12,4,6,7,1};
    int size = 5;
    int key = 6;
    int ans = is_binary(arr,0,9,key);
    if(ans){
        cout<<"element is present"<<endl;
    }
    else{
        cout<<"element is not present"<<endl;
    }
    return 0;
}