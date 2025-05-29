#include<iostream>
using namespace std;
int flip_bit_no(int start,int goal){
    int ans = start^goal;
    return __builtin_popcount(ans);
}
int main(){
    int start = 10;
    int goal = 7;
    cout << "Minimum Bit Flips to Convert Number "<<flip_bit_no(start,goal);
}