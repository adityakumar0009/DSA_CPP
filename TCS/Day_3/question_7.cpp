#include<iostream>
using namespace std;
bool is_prime(int n){
    if (n==0 || n==1){
        return false;
    }
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n = 7;
    if(is_prime(n)){
        cout<<"It is a prime number"<<endl;
    }
    else{
        cout << "It is not a prime number" << endl;
    }
    return 0;
}