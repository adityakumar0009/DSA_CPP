#include<iostream>
using namespace std;
int first_occ(int arr[], int n, int key){
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
            s= mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int second_occ(int arr[], int n, int key){
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
            s= mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main(){
    int even[10] = {1,2,2,2,3,4,5,6,7,8};
    cout<<"no of occurance of 2 is->"<<second_occ(even,10,2)-first_occ(even,10,2);
    return 0;
}