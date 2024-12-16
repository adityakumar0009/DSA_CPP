#include<iostream>
#include<vector>
using namespace  std;
int partition(vector<int>& arr,int st, int end){
    int idx = -1;
    int pivot = arr[end];
    for(int j=0; j<end; j++){
        if(arr[j]<=pivot){
            idx++;
            swap(arr[j],arr[idx]);
        }
    }
    idx++;
    swap(arr[end], arr[idx]);
    return idx;
}
void quick_sort(vector<int>&arr,int st, int end){
    if(st<end){
        int piv_idx = partition(arr,st,end);
        quick_sort(arr,st,piv_idx-1);//left part
        quick_sort(arr,piv_idx+1,end);//right part
    }
}
int main()
{
    vector<int> arr = {12,31,35,8,32,17};
    quick_sort(arr,0,arr.size()-1);
    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}