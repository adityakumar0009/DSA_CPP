#include<iostream>
#include<vector>
using namespace std;
int binary_Search(vector<int>& arr,int target){
    int st = 0;
    int end = arr.size()-1;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            st = st+1;
        }
        else{
            end = end-1;
        }
    }
}
int main(){
    vector<int> arr = {-1, 0, 3, 5, 9, 12};
    int target = 9;
    cout<<"Element is present at index "<<binary_Search(arr,target);
    return 0;
}