#include<iostream>
using namespace std;
uint32_t rev_bits(uint32_t n){
    uint32_t ans = 0;
    for(int i=0; i<n; i++){
        ans = (ans<<1) | (n&1);
        n>>=1;
    }
    return ans;
}
int main(){
    uint32_t n= 00000010100101000001111010011100;
    cout<<"reverse bits is -> "<<rev_bits(n);
    return 0;
}