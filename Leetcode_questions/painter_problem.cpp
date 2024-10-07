#include<iostream>
#include<vector>
#include<climits>
using namespace std;
bool is_possible(vector<int> &arr, int n, int m, int maxAllowedTime){
    int time = 0;
    int painter = 1;
    for(int i=0; i<n; i++){
        if(time+arr[i]<=maxAllowedTime){
            time+=arr[i];
        }
        else{
            painter++;
            time = arr[i];
        }
    }
    if(painter<=m){
        return true;
    }
    else{
        return false;
    }
}

int painter_problem(vector<int> &arr, int n, int m){
    int sum = 0;
    int maxvalue = INT_MIN;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        maxvalue = max(maxvalue,arr[i]);
    }
    int s = maxvalue;
    int e = sum;
    int ans = -1;
    while (s<=e)
    {
        int mid = s+(e-s)/2;
        if(is_possible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}
    int main(){
        vector<int> arr = {40,30,10,20};
        int n = 4;
        int m = 2;
        cout<<painter_problem(arr,n,m)<<endl;
        return 0;
    }
