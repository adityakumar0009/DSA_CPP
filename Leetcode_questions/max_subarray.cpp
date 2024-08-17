#include<iostream>
using namespace std;
int max_sub_Array(int arr[], int n){
    if(n==0){
        return 0;
    }
    int sum = arr[0];
    int current_sum = arr[0];
    for(int i=1; i<n; i++){
        current_sum = max(current_sum+arr[i],arr[i]);
        sum = max(current_sum,sum);
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
    int maxSum = max_sub_Array(arr, n);
    cout << "Maximum Subarray Sum: " << maxSum << endl;
    return 0;
}