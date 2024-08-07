#include<iostream>
using namespace  std;
int main(){
    int arr[10] = {23,45,6,7};
    cout<<"address of 1st memory block->"<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<&arr<<endl;
    cout<<*arr<<endl;
    cout<<&arr+1<<endl;
    cout<<&arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<*(arr+2)<<endl;
    return 0;
}