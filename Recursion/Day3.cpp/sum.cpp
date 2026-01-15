#include<iostream>
using namespace std;
int get_sum(int arr[],int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    int remaining = get_sum(arr+1,size-1);
    int ans = arr[0]+remaining;
    return ans;
}
int main(){
    int arr[] = {2,5,6,8,3};
    int size = 5;
    cout<<get_sum(arr,size);
    return 0;
}