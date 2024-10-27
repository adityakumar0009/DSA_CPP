#include<iostream>
using namespace std;
int main(){
    char str[100];
    cout<<"enter the string : -> ";
    cin.getline(str,100,'$');
    cout<<"output->"<<str<<endl;

    
    return 0;
}