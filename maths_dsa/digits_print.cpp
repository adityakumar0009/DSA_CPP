#include<iostream>
using namespace std;
void printDigit(int n){
    while(n!=0){
        int digit = n%10;
        cout<<digit<<endl;
        n = n/10;
    }
}
int main(){
    int n =3897;
    printDigit(n);
    return 0;
}