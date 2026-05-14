#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int curr_sum = 0;
    int max_sum = INT_MIN;
    for(int i=0; i<arr.size(); i++){
        curr_sum+=arr[i];
        max_sum = max(max_sum,curr_sum);
        if(curr_sum<0){
            curr_sum = 0;
        }
    }
    cout<<"Maximum sum is "<<max_sum<<endl;
    return 0;
}