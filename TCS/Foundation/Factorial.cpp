#include<iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int n = 6;
    cout<<"Factorial of 6 is "<<factorial(6);
    return 0;
}