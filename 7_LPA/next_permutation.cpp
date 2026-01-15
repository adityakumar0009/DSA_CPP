#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void next_permutation(vector<int>& A){
    int pivot = -1;
    int n = A.size();
    for(int i=n-2; i>=0; i--){
        if(A[i]<A[i+1]){
            pivot = i;
            break;
        }
    }
    if(pivot==-1){
        reverse(A.begin(),A.end());
    }
    for(int i=n-1; i>=pivot; i--){
        if(A[i]>A[pivot]){
            swap(A[i],A[pivot]);

        }
    }
    reverse(A.begin() + pivot + 1, A.end());
}
int main(){
    vector<int> A = {1,2,3};
    next_permutation(A);
    for(int i=0; i<A.size(); i++){
        cout<<A[i]<<" ";
    }
    return 0;
}