#include<iostream>
using namespace std;
void count_digit(int n){
    int count = 0;
    while(n!=0){
        int digit = n%10;
        count++;
        n=n/10;
    }
    cout<<count<<endl;
}
int main(){
    int n = 3478;
    count_digit(n);
    return 0;
}