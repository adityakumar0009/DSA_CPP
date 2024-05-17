#include<iostream>
using namespace std;
int main(){
    /*int arr[100] = {2,3,4};
    cout<<"statrting array address "<<arr<<endl;
    cout<<"statrting array address "<<&arr[0]<<endl;
    cout<<"value - "<<*arr<<endl;
    cout<<"value - "<<*arr+1<<endl;
    cout<<"value - "<<*(arr+1)<<endl;
    cout<<"value - "<<arr[2]<<endl;
    cout<<"value - "<<*arr+2<<endl;

    int i = 2;
    cout<<i[arr]<<endl;*/

    // int temp[10];
    // cout<<"size - "<<sizeof(temp)<<endl;
    // int *p = &temp[0];
    // cout<<"size - "<<sizeof(*p)<<endl;
    // cout<<"size - "<<sizeof(&p)<<endl;
    // return 0;

    int a[20] = {1,2,3,5};
    cout<<&a[0]<<endl;
    cout<<&a[0]+1<<endl;
    // cout<<a<<endl;
    // *a = *a+1;
    // cout << *a<<endl;

    int *p = &a[0];
    cout<<&p<<endl;

}