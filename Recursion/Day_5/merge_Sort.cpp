#include<iostream>
using namespace std;
void merge(int arr[], int s, int e){
    int mid = (s+e)/2;
    int len1 = mid-s+1;
    int len2 = e-mid;
    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainarrayIndex = s;
    for(int i =0; i<len1; i++){
        first[i] = arr[mainarrayIndex];
    }
    mainarrayIndex = mid+1;
    for(int i=0; i<len2; i++){
        second[i] = arr[mainarrayIndex];
    }
    //merge 2 sorted array
    int index1 = 0;
    int index2 = 0;
    mainarrayIndex = s;
    while (index1 < len1 && index2 < len2){
        if(first[index1]<second[index2]){
            arr[mainarrayIndex++] = first[index1++];
        }
        else{
            arr[mainarrayIndex++] = second[index2++];
        }
    }
    while(index1 < len1){
        arr[mainarrayIndex++] = first[index1++];
    }
    while(index2 < len2){
        arr[mainarrayIndex++] = second[index2++];
    }
}
void mergesort(int arr[] , int s, int e){
    if(s>=e){
        return ;
    }
    int mid = (s+e)/2;
    //left side
    mergesort(arr,s,mid);
    //right side
    mergesort(arr,mid+1,e);
    //merge
    merge(arr,s,e);
}
int main(){
    int arr[6] = {3,2,6,8,4,1};
    int n =6;
    mergesort(arr,0,n-1);
    for(int i =0 ; i<n; i++){
        cout<<arr[i]<<" ";
    }

}  
