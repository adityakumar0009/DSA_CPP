#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool is_possible(vector<int> &arr, int N, int C, int mid){
    int cows =1;
    int last_stall_position = arr[0];
    for(int i=0; i<N; i++){
        if(arr[i]-last_stall_position>=mid){
            cows++;
            last_stall_position= arr[i];
        }
        if(cows == C){
            return true;
        }
    }
    return false;
}
int get_distance(vector<int> &arr, int N, int C){
    sort(arr.begin(),arr.end());
    int s = 1;
    int e = arr[N-1]- arr[0];
    int ans = -1;
    while (s<=e)
    {
        int mid = s+(e-s)/2;
        if(is_possible(arr,N,C,mid)){
            ans = mid;
            s=mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return ans;
    
}
int main(){
    int N =5;
    int C=3;
    vector<int> arr = {1,2,8,4,9};
    cout<<get_distance(arr,N,C);
    return 0;
}