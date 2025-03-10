#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool is_possible(vector<int> &arr, int N, int C,int maxAllowedDis){
    int cow = 1;
    int last_stall_position = arr[0];
    for(int i=0; i<N; i++){
        if (arr[i] - last_stall_position >= maxAllowedDis){
            cow++;
            last_stall_position = arr[i];
        }
        else{
            if(cow==C){
                return true;
            }
        }
    }
    return false;
}
int get_distance(vector<int> &arr, int N, int C){
    sort(arr.begin(),arr.end());
    // int n = arr.size();
    int st = arr[0];
    int end = arr[N-1]-arr[0];
    int ans = -1;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(is_possible(arr,N,C,mid)){
            ans = mid;
            st = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {1,2,8,4,9};
    int N = 5;
    int C = 3;
    cout<<"aggresive_cow_minimun_distance -> "<<get_distance(arr,N,C);
    return 0;
}