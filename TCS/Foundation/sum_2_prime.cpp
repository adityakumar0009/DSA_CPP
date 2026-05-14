#include<iostream>
using namespace std;
bool isPrime(int n){
    if(n <= 1) return false;

    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
void checkSumOfPrimes(int n){
    bool found = false;
    for(int i = 2; i <= n/2; i++){
        if(isPrime(i) && isPrime(n - i)){
            cout<<n<<" = "<<i<<" + "<<(n - i)<<endl;
            found = true;
        }
    }
    if(!found){
        cout<<"Not possible"<<endl;
    }
}

int main(){
    int n = 34;
    checkSumOfPrimes(n);
    return 0;
}