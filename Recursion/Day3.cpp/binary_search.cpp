#include<iostream>
using namespace std;
bool isbinarysearch(int arr[],int size){
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remainingpart = isbinarysearch(arr+1,size-1);
        return remainingpart;
    }
}
int main(){
    int arr[5] = {2,4,52,6,8,};
    int size = 5;
    int ans = isbinarysearch(arr,size);
    cout<<ans<<endl;
    if(ans){
        cout<<"array is sorted"<<endl;
    }
    else{
        cout<<"array is not sorted";
    }
}