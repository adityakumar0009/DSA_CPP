#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void next_per(vector<int> & A){
    //step 1- find pivot
    int pivot = -1;
    int n = A.size();
    for(int i=n-2; i>=0; i++){
        if(A[i]<=A[i+1]){
            pivot = i;
            break;
        }
    }
    if(pivot==-1){
        reverse(A.begin(),A.end());
        return;
    }
    //step -2 find rightmost ele> pivot and the swap
    for(int i=n-1; i>=0; i--){
        if(A[i]>A[pivot]){
            swap(A[i],A[pivot]);
            break;
        }
    }
    //rev pivot to n-1
    int i = pivot+1;
    int j = n-1;
    while(i<=j){
        swap(A[i],A[j]);
        i++;
        j--;
    }
}
int main(){
    vector<int> A = {1,2,3};
    next_per(A);
    for(int i=0; i<A.size(); i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}