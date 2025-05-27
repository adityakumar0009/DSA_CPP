#include<iostream>
#include<vector>
using namespace std;
int binary_search(vector<int>&arr1,int target){
    int st = 0;
    int end = arr1.size()-1;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(target>arr1[mid]){
            st = mid+1;
        }
        else if(target<arr1[mid]){
            end = mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int> arr1 = {-1,0,3,4,5,9,12};
    int target = 12;
    cout<<"binary search is at index "<<binary_search(arr1,target);
    // vector<int> arr2 = {-1,0,3,5,12};
    // int target = 0;
    return 0;
}