#include<iostream>
using namespace std;
int dec_bin(int decnum){
    int ans = 0;
    int pow = 1;
    while (decnum>0)
    {
        int rem = decnum%2;
        decnum=decnum/2;
        ans+=(rem*pow);
        pow = pow*10;
    }
    return ans;
    
}
int main(){
    int decnum = 50;
    cout<<dec_bin(decnum);
    return 0;
}