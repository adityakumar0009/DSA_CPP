#include<iostream>
#include<stack>
using namespace std;
void next_small(int arr[] , int n){
    stack<int> s;
    s.push(-1);
    int ans[n];
    for(int i=n-1; i>=0; i--){
        int curr = arr[i];
        while (s.top()>=curr)
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(curr);
    }
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n = 4;
    int arr[]={2,1,4,3};
    next_small(arr,n);
    return 0;
}