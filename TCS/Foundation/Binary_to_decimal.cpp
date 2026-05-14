#include<iostream>
using namespace std;
int binary_decimal(int n){
    int ans = 0;
    int power = 1;
    while(n>0){
        int last_digit = n%10;
        ans+=last_digit*power;
        power*=2;
        n = n/10;
    }
    return ans;
}
int main(){
    int n = 1011;
    cout<<"Binary to decimal is "<<binary_decimal(n);
}