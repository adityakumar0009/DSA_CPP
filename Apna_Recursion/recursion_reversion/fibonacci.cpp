#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n==0){
        return n;
    }
    if(n==1){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<"fibonacci of the number is : "<<fibonacci(n);
    return 0;
}