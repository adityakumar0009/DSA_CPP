//Move all zeros to end
#include<iostream>
using namespace std;
void move_zero(int arr[],int n){
    int index = 0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            arr[index++] = arr[i];
        }
    }
    while(index<n){
        arr[index++] = 0;
    }
}
int main(){
    int arr[] = {1, 2, 0, 3, 0, 5};
    int n = 6;
    move_zero(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}