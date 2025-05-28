#include<iostream>
#include<vector>
using namespace std;
bool is_valid(vector<int>&arr,int n,int m,int max_allowed_pages){
    int students = 1;
    int pages = 0;
    for(int i=0; i<n; i++){
        if(arr[i]>max_allowed_pages){
            return false;
        }
        if(pages + arr[i] <= max_allowed_pages){
            pages+=arr[i];
        }
        else{
            students++;
            pages = arr[i];
        }
    }
    if(students>m){
        return false;
    }
    else{
        return true;
    }

}
int allocate_books(vector<int>& arr, int n, int m){
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
    while(st<=end){
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
    cout<<"alloacte book "<<allocate_books(arr,n,m);
    return 0;
}