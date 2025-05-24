#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n = 5;
    int arr[5] = {1,2,3,4,5};
    int max_sum = INT_MIN;
    for(int i=0; i<n; i++){
        int curr_sum = 0;
        for(int j=i; j<n; j++){
            curr_sum+=arr[j];
            max_sum = max(curr_sum,max_sum);
        }
    }
    cout<<"Maximum subarray sum is "<<max_sum<<endl;
    return 0;
}