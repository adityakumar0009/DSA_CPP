#include<iostream>
#include<vector>
using namespace std;
int binary_search(vector<int> arr, int tar, int s, int e){
    if(s<=e){
        int mid = s+(e-s)/2;
        if(arr[mid]>tar){
            return (arr,tar,s,mid-1);
        }
        else if(arr[mid]<tar){
            return (arr,tar,mid+1,e);
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int> arr1 = {-1,2,4,6,8};
    int tar1 = 4;
    cout<<binary_search(arr1,tar1,0,arr1.size()-1)<<endl;;
    vector<int> arr2 = {0,1,2,3};
    int tar2 = 1;
    cout<<binary_search(arr2,tar2,0,arr2.size()-1)<<endl;
    return 0;
}