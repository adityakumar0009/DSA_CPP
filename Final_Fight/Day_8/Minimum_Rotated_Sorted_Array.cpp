#include<iostream>
#include<vector>
using namespace std;
int min_Rotated(vector<int>& arr){
    int n = arr.size();
    int st = 0;
    int end = n-1;
    while(st<end){
        int mid = st+(end-st)/2;
        if(arr[mid]>arr[end]){
            st = mid+1;
        }
        else{
            end = mid;
        }
    }
    return arr[st];
}
int main(){
    vector<int> arr = {3, 4, 5, 1, 2};
    cout<<"Minimum in Rotated Sorted Array is "<<min_Rotated(arr);
    return 0;
}