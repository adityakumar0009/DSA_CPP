//Second Largest Element
#include<iostream>
#include<algorithm>
using namespace std;
int second_largest(int arr[],int n){
    int largest = arr[0];
    int second = -1;
    for(int i=1; i<n; i++){
        if(arr[i]>largest){
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest){
            second = arr[i];
        }
    }    
    return second;
}
int main(){
    int arr[] = {10,20,40,50};
    int n = 4;
    cout<<"Second largest number is "<<second_largest(arr,n);
    return 0;
}