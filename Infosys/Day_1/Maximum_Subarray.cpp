#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i <n; i++){
        cin>>arr[i];
    }
    int max_sub_sum = INT_MIN;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        max_sub_sum = max(max_sub_sum,sum);
        if(sum<0){
            sum = 0;
        }
    }
    cout<<"Maximum subarray sum is "<<max_sub_sum;
    return 0;
}