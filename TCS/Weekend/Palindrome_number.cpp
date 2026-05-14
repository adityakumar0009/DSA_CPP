#include<iostream>
using namespace std;
bool is_palindrome(int n){
    int orignal = n;
    int rev = 0;
    while(n>0){
        int digit = n%10;
        rev = rev*10 + digit;
        n = n/10;
    }
    return orignal=rev;
}
int main(){
    int n;
    cin>>n;
    if(is_palindrome(n)){
        cout<<"It is a palindrome number"<<endl;
    }
    else{
        cout<<"IT is not a palindrome number"<<endl;
    }
    return 0;
}