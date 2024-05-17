#include<iostream>
using namespace std;
int main(){
    int arr[10] = {1,2,3,4};
    char ch[7] = "aditya";

    cout<<arr<<endl;
    cout<<ch<<endl;

    char *c = &ch[0];
    cout<<c<<endl;

    int *p = &arr[0];
    cout<<p<<endl;

    char temp = 'z';
    char*s = &temp;
    cout<<s<<endl;

}