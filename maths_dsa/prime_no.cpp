#include<iostream>
using namespace std;
string is_prime(int n){
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            cout<<"not prime";
        }
        else{
            cout<<"prime";
        }
    }
}
int main(){
    int n = 7;
    cout<<is_prime(n)<<endl;
    return 0;
}