#include<iostream>
using namespace std;
int _gcd(int a,int b){
    while(a>0 && b>0){
        if(a>b){
            a = a%b;
        }
        else{
            b = b % a;
        }
    }
    if(a==0){
        return b;
    }
    return a;
}
int lcm(int a,int b){
    int gcd = _gcd(a,b);
    return ((a*b)/gcd);
}
int main(){
    int a = 20;
    int b = 28;
    cout<<"Lcm of 20 and 28 is "<<lcm(a,b);
    return 0;
}