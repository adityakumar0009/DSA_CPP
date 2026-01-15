#include<iostream>
#include<climits>
using namespace std;
bool is_palindrome(int n){
    if(n<0){
        return false;
    }
    int original_no = n;
    int reverse_no = 0;
    while(n!=0){
        int digit = n%10;
        if(reverse_no>INT_MAX/10 || reverse_no<INT_MIN/10){
            return false;
        }
        reverse_no = reverse_no*10+digit;
        n = n/10;
    }
    return original_no == reverse_no;
}
int main(){
    int n;
    cin>>n;
    if(is_palindrome(n)){
        cout<<"It is a palindrome number"<<endl;
    }
    else{
        cout<<"It is not a palindrome number"<<endl;
    }
    return 0;
}