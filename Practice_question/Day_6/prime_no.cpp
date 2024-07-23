#include<iostream>
using namespace std;
//1 for prime
//0 for not a prime
bool isprime(int n){
    for(int i =2; i<=n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int num;
    cout<<"enter the number->";
    cin>>num;
    if(isprime(num)){
        cout<<"is a prime number"<<endl;
    }
    else{
        cout<<"not a prime number"<<endl;
    }
    return 0;
}