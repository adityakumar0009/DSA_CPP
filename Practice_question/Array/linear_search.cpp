#include<iostream>
using namespace std;
int linear_search(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {2,4,6,8,9};
    int size = 5;
    int target = 8;
    cout<<"linear search is->"<<linear_search(arr,size,target);
    return 0;
}