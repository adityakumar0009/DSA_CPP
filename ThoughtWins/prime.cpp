#include<iostream>
using namespace std;
string is_prime(int n){
    for(int i=2; i*1<=n; i++){
        if(n%i==0){
            return "Non Prime";
        }
    }
    return "prime";
}
int main(){
    int n = 42;
    cout<<is_prime(n)<<endl;
    return 0;
}