#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count = 0;
    while(n>0){
        int digit = n%10;
        count++;
        n = n/10;
    }
    cout<<"Count digit is "<<count;
    return 0;
}