#include<iostream>
using namespace std;
int gcd(int a,int b){
    while(a>0 && b>0){
        if(a>b){
            a = a%b;
        }
        if(b>a){
            b = b%a;
        }
    }
    if(a==0){
        return b;
    }
    else{
        return a;
    }
}
int lcm(int a,int b){
    return a*b/(gcd(a,b));
}
int main(){
    int a = 20;
    int b = 28;
    cout<<"greatest common divisor is "<<gcd(a,b)<<endl;
    cout<<"lowest common divisor is "<<lcm(a,b);
    return 0;
}