#include<iostream>
using namespace std;
void change_arr(int arr[], int size){
    for(int i=0; i<size; i++){
        arr[i] = 2*arr[i];
    }
}
int main(){
    int arr[] = {1,2,3};
    int size = 3;
    cout<<endl;
    change_arr(arr,size);
    for(int i=0; i<3; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}