#include<iostream>
using namespace std;
void merge(int arr[],int s,int e){
    int mid = (s+e)/2;
    int len1 = mid-s+1;
    int len2 = e-mid;
    int *first = new int[len1];
    int *second = new int[len2] ;
    //copy values
    int mainarrayIndex = s;
    for(int i=0; i<len1; i++){
        first[i] = arr[mainarrayIndex++];
    }
    int k = mid+1;
    for(int i=0; i<len1; i++){
      second[i] = arr[mainarrayIndex++];
    }
    //merge two sort
    int index1 = 0;
    int index2 =0;
    mainarrayIndex = s;

    while (index1<len1 && index2<len2)
    {
       if(first[index1]<second[index2]){
        arr[mainarrayIndex++] = first[index1++];
       }
       else{
        arr[mainarrayIndex++] = second[index2++];
       }
    }
    
}
void mergesort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    //left part sort
    int mid = (s+e)/2;
    mergesort(arr,s,mid);
    //reight part sort
    mergesort(arr,mid+1,e);
    //merge
    merge(arr,s,e);
}
int main(){
    int arr[6]={1,4,3,5,2,8};
    int n;
    mergesort(arr,0,n-1);
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}