#include<iostream>
using namespace std;
bool is_prime(int n){
    if(n<=1){
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
    int left;
    int right;
    cin>>left;
    cin>>right;
    int sum = 0;
    for(int i=left; i<=right; i++){
        if(is_prime(i)){
            sum+=i;
        }
    }
    cout << sum;
    return 0;
}