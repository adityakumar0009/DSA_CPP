#include<iostream>
#include<vector>
using namespace std;
int Peak_Mountain_Index(vector<int>& arr){
    int n = arr.size();
    int st = 0;
    int end = n-1;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid-1]>arr[mid]){
            end = mid-1;
        }
        else{
            st = mid+1;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {0,2,1,0};
    cout<<"Peak Mountain Index is "<<Peak_Mountain_Index(arr);
    return 0;
}