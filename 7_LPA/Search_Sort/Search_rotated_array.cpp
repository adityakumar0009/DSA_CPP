#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>& A,int target){
    int st = 0;
    int end = A.size()-1;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(A[mid]==target){
            return mid;
        }
        //left portion
        if(A[st]<=A[mid]){
            if(A[st]<=target && target<A[mid]){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        //right portion
        else{
            if(target>=A[mid] && target<A[end]){
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
    vector<int> A = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    cout<<"Search in a rotated array is "<<search(A,target);
    return 0;
}