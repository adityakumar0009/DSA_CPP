#include<iostream>
using namespace std;
int my_Sqrt(int x){
    long long l = 0;
    int long r = (long long)x+1;
    while(l<r){
        int mid = l+(r-l)/2;
        long long sq = 1LL*mid*mid;
        if(sq>x){
            r = mid;
        }
        else{
            l = mid+1;
        }
    }
    return l-1;
}
int main(){
    int x = 4;
    cout<<"Sq root of a number is "<<my_Sqrt(x);
    return 0;
}