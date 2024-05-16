#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<"the number is - >"<<n<<endl;
    int *ptr = &n;
    cout<<"the address is ->"<<&n<<endl;
    cout<<"the value is ->"<<*ptr<<endl;
    cout<<"the address is ->"<<ptr<<endl;

    cout<<"size of integer"<<sizeof(n)<<endl;
    cout<<"size of address"<<sizeof(ptr)<<endl;   
}