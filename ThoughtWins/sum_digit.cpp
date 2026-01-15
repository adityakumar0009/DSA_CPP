#include<iostream>
using namespace std;
void sum_digit(int n){
    int sum = 0;
    while(n!=0){
        int digit = n%10;
        sum+=digit;
        n = n/10;
    }
    cout<<"The sum of digit is "<<sum;
}
int main(){
    int n = 987654;
    sum_digit(n);
    cout << "the number of digit is " << (int)(log10(n) + 1) << endl;
    return 0;
}