#include<iostream>
#include<vector>
using namespace std;
int count_prime(int n){
    vector<bool> isprime(n+1, true);
    int count=0;
    isprime[0]=isprime[1]=false;
    for(int i=2; i<n; i++){
        if(isprime[i]){
            count++;
            for(int j=i*2; j<n; j=j+i){
                isprime[j] = false;
            }
        }
    }
    return count;
}
int main(){
    int n = 50;
    cout<<count_prime(n)<<endl;
    return 0;
}