#include<iostream>
using namespace std;
bool is_prime(int num){
    if(num==0 || num==1){
        return false;
    }
    for(int i=2; i*i<=num; i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int prime_num(int n){
    int sum = 0;
    int count = 0;
    for(int i=2;count<n; i++){
        if(is_prime(i)){
            sum+=i;
            count++;
        }
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<"The sum of prime number is "<<prime_num(n);
    return 0;
}