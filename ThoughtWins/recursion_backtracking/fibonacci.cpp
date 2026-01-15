#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n==0 || n==1){
        return n;
    }
    int fibonacc = fibonacci(n-1) + fibonacci(n-2);
    return fibonacc;
}
int main(){
    int n = 4;
    cout<<"Fibonacci is "<<fibonacci(n);
    return 0;
}