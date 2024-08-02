#include<iostream>
using namespace std;
int get_sum(int arr[],int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    else{
        int remaining = get_sum(arr+1,size-1);
        int sum = arr[0] + remaining;
        return sum;
    }
}
int main(){
    int arr[5] = {2,4,6,8,9};
    int size = 5;
    int sum = get_sum(arr,size);
    cout<<"sum is->"<<sum;
    return 0;
}