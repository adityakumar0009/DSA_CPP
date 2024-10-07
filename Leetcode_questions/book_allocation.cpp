#include<iostream>
#include<vector>
using namespace std;
bool is_valid(vector<int> &arr, int n, int m, int mid){
   int st = 1;
   int pages = 0;
   for(int i=0; i<n; i++){
    if(arr[i]>mid){
        return false;
    }
    if(pages+arr[i]<=mid){
        pages+=arr[i];
    }
    else{
        st++;
        pages = arr[i];
    }
    if(st>m){
    return false;
   }
   }
   return true;
}
int AllocatedBooks(vector<int> &arr, int n, int m){
    if(m>n){
        return -1;
    }
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    int ans = -1;
    int st = 0;
    int end = sum;
    while (st<=end)
    {
        int mid = st+(end-st)/2;
        if(is_valid(arr,n,m,mid)){
            ans = mid;
            end = mid-1;
        }
        else{
            st = mid+1;
        }
    }
    return ans;
    
}
int main(){
    vector<int> arr = {2,1,3,4};
    int n = 4;
    int m = 2;
    cout<<AllocatedBooks(arr, n, m)<<endl;
    return 0;
}