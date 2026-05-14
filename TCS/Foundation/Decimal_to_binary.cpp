#include<iostream>
using namespace std;
int decimalToBinary(int n){
    int ans = 0;
    int power = 1;
    while(n > 0){
        int rem = n % 2;
        ans += rem * power;
        power *= 10;
        n /= 2;
    }
    return ans;
}

int main(){
    int n = 11;
    cout<<"Binary = "<<decimalToBinary(n);
}