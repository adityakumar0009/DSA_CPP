#include<iostream>
#include<vector>
using namespace std;
int binary_search(vector<int>& arr1, int target,int st,int end){
    if(st<=end){
    int mid = st+(end-st)/2;
    if(target>arr1[mid]){
        return binary_search(arr1,target,mid+1,end);
    }
    if(target<arr1[mid]){
        return binary_search(arr1, target, st, mid-1);
    }
    else{
        return mid;
    }
}
}
int main(){
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
    int target = 12;
    int st = 0;
    int end = arr1.size() - 1;
    cout<<"target is found at index "<<binary_search(arr1,target,0,arr1.size()-1);
    return 0;
}