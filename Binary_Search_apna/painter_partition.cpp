#include<iostream>
#include<vector>
#include<climits>
#include<iostream>
using namespace std;
bool is_possible(vector<int>& arr,int n,int m,int max_alloewd_time){
    int painter = 1;
    int time = 0;
    for(int i=0; i<n; i++){
        if(arr[i]>max_alloewd_time){
            return false;
        }
        if(time+arr[i]<=max_alloewd_time){
            time+=arr[i];
        }
        else{
            painter++;
            time = arr[i];
        }
    }
    if(painter>m){
        return false;
    }
    else{
        return true;
    }
}
int painter_partition(vector<int>& arr,int n,int m){
    int max_no = INT_MIN;
    for(int i=0; i<arr.size(); i++){
        max_no = max(max_no,arr[i]);
    }
    int st = max_no;
    int  sum = 0;
    for(int i=0; i<arr.size(); i++){
        sum+=arr[i];
    }
    int end = sum;
    
    int ans = -1;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(is_possible(arr,n,m,mid)){
            ans = mid;
            end = mid-1;
        }
        else{
            st = mid+1;
        }
    }
    return ans;
};
int main(){
    vector<int> arr = {40,30,10,20};
    int n = 4;
    int m = 2;
    cout<<"Painter partitiion "<<painter_partition(arr,n,m);
    return 0;
}