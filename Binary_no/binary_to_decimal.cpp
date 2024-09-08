#include<iostream>
using namespace std;
int bin_to_decimal(int binary){
    int ans = 0;
    int power = 1;
    while (binary>0)
    {
       int rem = binary%10;
       binary = binary/10;
       ans+=rem*power;
       power = power*2;
    }
    return ans;
    
}
int main(){
    int binary = 1001;
    cout<<bin_to_decimal(binary);
}