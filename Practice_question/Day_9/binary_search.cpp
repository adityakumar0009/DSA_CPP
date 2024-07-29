#include<iostream>
using namespace std;
int binarysearch(int arr[], int n, int key){
    int start = 0;
    int end=n-1;
    int mid = (start+end)/2;
    while (start<=end)
    {
        if(arr[mid]==key){
            return mid;
        }
        //right side
        if(arr[mid]<key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
    
}
int main(){
    int even[6] = {2,4,6,8,9,3};
    int odd[5] = {2,3,5,7,9};
    int ans1 = binarysearch(even,6,9);
    cout<<"9 is found at index->"<<ans1<<endl;;
    int ans2 = binarysearch(odd,5,9);
    cout<<"9 is found at index->"<<ans2;
    return 0;
}