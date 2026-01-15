#include<iostream>
using namespace std;
int ecludian(int a,int b){
    while(a>0 && b>0){
        if(a>b){
            a = a%b;
        }
        else{
            b= b%a;
        }
    }
    if(a==0){
        return b;
    }
    return a;
}
int main(){
    int a = 28;
    int b = 20;
    cout<<"The hcf and gcd of two number is "<<ecludian(a,b);
    return 0;
}