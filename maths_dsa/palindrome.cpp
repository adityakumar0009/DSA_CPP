#include <iostream>
using namespace std;
int rev_num(int n)
{
    int ans = 0;
    while (n != 0)
    {
        int digit = n % 10;
        ans = ans * 10 + digit;
        n = n / 10;
    }
    return ans;
}
bool is_paindrome(int n){
    if(n<0){
        return false;
    }
    int reverse = rev_num(n);
    return n == reverse;
}
int main()
{
    int n = 1313;
    if(is_paindrome(n)){
        cout<<"it is a palindrome number"<<endl;
    }
    else{
        cout<<"not a palindrome number"<<endl;
    }
    return 0;
}