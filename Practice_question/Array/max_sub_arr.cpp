#include<iostream>
using namespace std;
int main(){
    int n =5;
    int arr[5]={1,2,3,4,5};
    int max_sum = INT64_MIN;
    for(int start = 0; start<n; start++){
        int cur_sum = 0;
        for(int end=start; end<n; end++){
            cur_sum+=arr[end];
            max_sum = max(max_sum,cur_sum);
        }
    }
    cout<<"max-sum "<<max_sum<<" "<<endl;
    return 0;
}