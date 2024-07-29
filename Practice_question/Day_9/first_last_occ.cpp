#include<iostream>
using namespace std;
int firstocc(int arr[],int n,int key){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while (s<=e)
    {
        if(arr[mid]==key){
            ans = mid;
            e = mid-1;
        }    
        if(arr[mid]>key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}    
int lastocc(int arr[],int n,int key){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while (s<=e)
    {
        if(arr[mid]==key){
            ans = mid;
            s = mid+1;
        }    
        if(arr[mid]>key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}    
int main(){
    int even[10] = {1,2,2,2,5,6,2,7,9,8};
    cout<<"first occurance of 2 is at index-> "<<firstocc(even,10,2)<<endl;
    cout<<"last occurance of 2 is at index-> "<<lastocc(even,10,2);
    return 0;
}