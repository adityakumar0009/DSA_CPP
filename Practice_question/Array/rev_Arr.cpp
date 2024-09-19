#include<iostream>
using namespace std;
void reve_Arr(int arr[], int start, int end){
    while (start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}
int main(){
    int arr[] = {2,4,6,8};
    int size = 4;
    int start = 0;
    int end = size-1;
    reve_Arr(arr,start,end);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}