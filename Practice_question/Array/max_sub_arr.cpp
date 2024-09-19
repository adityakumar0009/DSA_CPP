#include<iostream>
using namespace std;
int main(){
    int n =7;
    int arr[7]={3,-4,5,4,-1,7,-8};
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