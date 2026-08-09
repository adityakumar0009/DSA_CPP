#include<iostream>
#include<vector>
using namespace std;
int search_rotate(vector<int>& arr,int target){
    int st = 0;
    int end = arr.size()-1;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(arr[mid]==target){
            return mid;
        }
        //left portion
        if(arr[st]<=arr[mid]){
            if(target>=arr[st] && target<=arr[mid]){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        else{
            if(target>=arr[mid] && target<=arr[end]){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    cout<<"Search in a rotated array is "<<search_rotate(arr,target);
    return 0;
}