//sum of digits recursively
#include<iostream>
using namespace std;
int sum_digit(int n){
    if(n==0){
        return 0;
    }
    return (n%10) + sum_digit(n/10);
}
int main(){
    int n = 980;
    cout<<"sum of digit is "<<sum_digit(n);
    return 0;
}