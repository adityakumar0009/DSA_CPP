#include<iostream>
using namespace std;
int main(){
    // int num = 5;
    // int *p = &num;
    // cout<<"before num "<<num<<endl;
    // (*p)++;
    // cout<<"after num "<<num<<endl;

    //copy a pointer
    // int *q = p;
    // cout<< p <<"-"<< q <<endl;
    // cout<< *p <<"-"<< *q <<endl;
    // return 0;

    //important concept
    int i = 3;
    int *s = &i;
    //cout<<*s++<<endl;
    *s = *s+1;
    cout<<*s<<endl;

    cout<<"before s "<<s<<endl;
    s=s+1;
    cout<<"after s "<<s<<endl;

}