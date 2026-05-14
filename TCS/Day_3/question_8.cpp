#include<iostream>
using namespace std;
int reverse_number(int& n){
    int rev = 0;
    while(n>0){
        int digit = n%10;
        rev = rev*10+digit;;
        n = n/10;
    }
    return rev;
}
int main(){
    int n = 789;
    cout<<"Reverse number is "<<reverse_number(n);
    return 0;
}