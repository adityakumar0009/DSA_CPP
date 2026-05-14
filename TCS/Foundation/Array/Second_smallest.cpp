#include<iostream>
#include<vector>
using namespace std;
int second_smallest(vector<int>& arr){
    int smallest = arr[0];
    int second_small = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]<smallest){
            second_small = smallest;
            smallest = arr[i];
        }
        else if(arr[i]>smallest && arr[i]<second_small){
            second_small = arr[i];
        }
    }
    return second_small;
}
int main(){
    vector<int> arr = {5,4,6,7,3,1};
    cout<<"Second_smallest is "<<second_smallest(arr);
    return 0;
}