#include<iostream>
#include<vector>
using namespace std;
int count_prime(int n){
    int count = 0;
    vector<bool> is_prime(n+1,true);
    is_prime[0]=is_prime[1]=false;
    for(int i=2; i<n; i++){
        if(is_prime[i]){
            count++;
            for(int j=2*i; j<n; j=j+i){
                is_prime[j]=0;
            }
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    cout<<"The number of prime no is "<<count_prime(n);
    return 0;
}