#include<iostream>
using namespace std;
void bubble_Sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        bool is_swap = false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                is_swap = true;
            }
        }
        if(!is_swap){//return if array is already sorted
            return ;
        }
    }
}

void print_arr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n = 6;
    int arr[] = {4,1,6,3,2,5};
    bubble_Sort(arr,n);
    print_arr(arr,n);
    return 0;
}