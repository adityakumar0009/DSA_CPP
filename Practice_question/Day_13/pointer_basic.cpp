#include<iostream>
using namespace std;
int main(){
    int num = 10;
    cout<<num<<endl;
    //address of num is
    cout<<"address of num is->"<<&num<<endl;
    //pointer
    int *ptr = &num;
    cout<<*ptr<<endl;
    cout<<num<<endl;
    cout<<&num<<endl;
    cout<<"size of integer is->"<<sizeof(num)<<endl;
    cout<<"size of pointer is->"<<sizeof(ptr)<<endl;

    cout<<"before->"<<num<<endl;
    (*ptr)++;
    cout<<"after->"<<num<<endl;

    //copy pointer
    int *p = ptr;
    cout<<p<<" "<<ptr<<endl;

    cout<<*p<<" "<<*ptr<<endl;

     return 0;
}