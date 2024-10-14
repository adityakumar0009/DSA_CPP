#include<iostream>
using namespace std;
void selection_sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int min_index = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }
        swap(arr[min_index],arr[i]);
    }
}
int main(){
    int n = 6;
    int arr[] = {4,1,6,3,2,5};
    selection_sort(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}