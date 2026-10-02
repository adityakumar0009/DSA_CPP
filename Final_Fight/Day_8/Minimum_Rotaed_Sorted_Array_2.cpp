#include<iostream>
#include<vector>
using namespace std;
int Find_Min(vector<int>& arr){
    int n = arr.size();
    int st = 0;
    int end = n-1;
    while(st<end){
        int mid = st+(end-st)/2;
        if(arr[mid]>arr[end]){
            st = mid+1;
        }
        else if(arr[mid]<arr[end]){
            end = mid;
        }
        else{
            end--;
        }
    }
    return arr[st];
}
int main(){
    vector<int> arr = {2, 2, 2, 0, 1};
    cout<<"Minimum rotated Sorted Array is "<<Find_Min(arr);
    return 0;
}