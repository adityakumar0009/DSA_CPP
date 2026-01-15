#include<iostream>
using namespace std;
bool is_prime(int n){
    if(n<=1){
            return false;
        }
    for(int i=2; i<n; i++){
        if(n%i == 0){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cout<<"enter the number->"<<" ";
    cin>>n;
    if(is_prime(n)){
        cout<<"it is a prime number";
    }
    else{
        cout<<"not a prime no";
    }
    return 0;
}