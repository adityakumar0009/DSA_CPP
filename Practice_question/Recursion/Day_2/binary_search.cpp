#include<iostream>
using namespace std;
bool is_sorted(int arr[], int size){
    if(size==0||size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool rem_part = is_sorted(arr+1,size-1);
        return rem_part;
    }
}
int main(){
    int arr[5]={7,8,9,0,6};
    int size = 5;
    int ans = is_sorted(arr,size);
    if(ans){
        cout<<"array is sorted";
    }
    else{
        cout<<"array is not sorted";
    }
    return 0;
}