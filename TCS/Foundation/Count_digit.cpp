#include<iostream>
using namespace std;
int count_digit(int n){
    int count = 0;
    while(n>0){
        int digit = n%10;
        count+=1;
        n = n/10;
    }
    return count;
}
int main(){
    int n = 1234;
    cout<<"Total number of digit is "<<count_digit(n);
    return 0;
}