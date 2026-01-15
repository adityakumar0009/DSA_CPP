#include<iostream>
using namespace std;
void sum_digit(int n){
    int sum = 0;
    while (n>0)
    {
        int digit = n%10;
        sum+=digit;
         n = n/10;
    }
    cout<<sum<<" ";
}
int main(){
    int n;
    cout<<"enter the digit->"<<" ";
    cin>>n;
    sum_digit(n);
    return 0;
}