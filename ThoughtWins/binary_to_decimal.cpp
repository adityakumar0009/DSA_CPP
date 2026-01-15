#include<iostream>
using namespace std;
int bin_decimal(int bin){
    int ans = 0;
    int power = 1;
    while(bin>0){
        int rem = bin % 10;
        bin = bin / 10;
        ans += rem * power;
        power = power * 2;
    }
    return ans;
}
int main(){
    int bin = 10;
    cout<<"The binary to decimal conversion of this number is "<<bin_decimal(bin);
    return 0;
}