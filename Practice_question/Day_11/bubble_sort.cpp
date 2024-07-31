#include<iostream>
using namespace std;
void bubble_sort(int arr[], int n){
    for(int i=1; i<n; i++){
        for (int j = 0; j < n-1; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        
    }
}
int main(){
    int brr[5] = {1,5,3,9,6};
    bubble_sort(brr,5);
    cout<<"sorted elements are->"<<" ";
    for(int i=0; i<5; i++){
        cout<<brr[i]<<" ";
    }
    return 0;
}