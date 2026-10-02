#include<iostream>
#include<vector>
using namespace std;
int peak_element(vector<int>& arr){
    int n = arr.size();
    int st = 0;
    int end = n-1;
    while(st<end){
        int mid = st+(end-st)/2;
        if(arr[mid]>arr[mid+1]){
            end = mid;
        }
        else{
            st = mid+1;;
        }
    }
    return st;
}
int main(){
    vector<int> arr = {1, 2, 3, 1};
    cout<<"Peak Element is "<<peak_element(arr);
    return 0;
}