#include<iostream>
using namespace std;
void print_digit(int n){
    while(n!=0){
        int digit = n%10;
        cout<<digit<<endl;
        n = n/10;
    }
}
int main(){
    int n = 3987;
    print_digit(n);
    return 0;
}