#include<iostream>
using namespace std;
int main(){
    int arr[10];
    // //error
    // arr = arr+1;
    // cout<<arr<<endl;
    // return 0;

    int *ptr = &arr[10];
    cout<<ptr<<endl;
    ptr = ptr+1;
    cout<<ptr<<endl;

}