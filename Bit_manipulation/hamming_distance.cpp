#include<iostream>
using namespace std;
int hamming_distane(int x,int y){
    int ans = x^y;
    return __builtin_popcount(ans);
}
int main(){
    int x = 1;
    int y = 4;
    cout<<"hamming distance is "<<hamming_distane(x,y);
    return 0;
}