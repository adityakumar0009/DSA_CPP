#include<iostream>
#include<vector>
using namespace std;
int search(vector<int> &A, int tar){
    int s = 0;
    int e = A.size()-1;
    while (s<=e)
    {
       int mid = s+(e-s)/2;
       if(A[mid]==tar){
        return mid;
       }
       if(A[s]<=A[mid]){
        if(A[s]<=tar && tar<=A[mid]){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
       }
       if(A[mid]<=tar && tar<=A[e]){
        s = mid+1;
       }
       else{
        e = mid-1;
       }
    }
    return -1;
    
}
int main(){
    vector<int> A = {4, 5, 6, 7, 0, 1, 2};
    int ans = search(A,5);{
        cout<<ans;
    }
    return 0;
}