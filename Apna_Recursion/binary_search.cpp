#include<iostream>
#include<vector>
using namespace std;
int binary_search(vector<int> & arr, int target, int start,int end){
    if(start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid]>=target){
            return binary_search(arr,target,start,end-1);
        }
        else{
            return binary_search(arr,target,start-1,end);
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {1,2,4,6,8};
    int target = 3;
    int start = 0;
    int end = arr.size()-1;
    cout<<binary_search(arr,target,start,end);
    return 0;
}