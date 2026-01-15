#include<iostream>
using namespace std;
int triboncci(int n){
    if(n==0){
        return 0;
    }
    int a = 0;
    int b = 1;
    int c = 1;
    int d;
    for(int i=3; i<=n; i++){
        int d = a+b+c;
        a = b;
        b = c;
        c = d;
    }
    return c;
}
int main(){
    int n = 4;
    cout<<"Tribonacci number is "<<triboncci(n);
    return 0;
}