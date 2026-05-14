#include<iostream>
using namespace std;
bool is_palindrome(int n){
    int number = n;
    int rev = 0;
    while(n>0){
        int digit = n%10;
        rev = rev*10+digit;
        n = n/10;
    }
    return number == rev;
}
int main(){
    int n = 121;
    if(is_palindrome(n)){
        cout<<"The number is palindrome"<<endl;
    }
    else{
        cout<<"The number is not palindrome"<<endl;
    }
    return 0;
}