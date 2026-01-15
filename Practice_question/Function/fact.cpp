#include<iostream>
using namespace std;
int fact(int n){
    int fac = 1;
    for(int i=1;i<=n; i++){
        fac*=i;
    }
    return fac;
}
int main(){
    int n;
    cout<<"enter the number->"<<" ";
    cin>>n;
    cout<<"factorial is->"<<fact(n);
    return 0;
}