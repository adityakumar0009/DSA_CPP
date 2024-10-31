#include<iostream>
using namespace std;
int rev_num(int n){
    int ans = 0;
    while (n!=0)
    {
        int digit = n%10;
        ans=ans*10+digit;
        n=n/10;
    }
    return ans;
    
}
int main(){
    int n = 4537;
    cout<<rev_num(n);
    return 0;
}