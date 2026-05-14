#include<iostream>
#include<vector>
using namespace std;
int count_digit(int n){
    int count = 0;
    while(n>0){
        int digit = n%10;
        count++;
        n=n/10;
    }
    return count;
}
int main(){
    int n = 121345;
    cout<<"Total no of digit is "<<count_digit(n);
    return 0;
}