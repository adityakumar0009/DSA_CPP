#include<iostream>
#include<vector>
using namespace std;
int binary_search(vector<int>& arr,int target,int st,int end){
    if(st<=end){
        int mid = st+(end-st)/2;
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid]<=target){
            return binary_search(arr,target,mid+1,end);
        }
        else{
            return binary_search(arr,target,st,mid-1);
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {1,2,3,4,5};
    int target = 8;
    int st = 0;
    int end = arr.size()-1;
    cout<<"element is found at index : "<<binary_search(arr,target,st,end);
    return 0;
}