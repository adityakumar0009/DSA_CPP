#include<iostream>
using namespace std;
bool is_armstrong(int n){
    int copy_no = n;
    int sum = 0;
    while(n>0){
        int digit = n%10;
        sum+=digit*digit*digit;
        n=n/10;
    }
    return copy_no==sum;
}
int main(){
    int n = 153;
    if(is_armstrong(n)){
        cout<<"It is an armstrong number"<<endl;
    }
    else{
        cout<<"It is not an armstrong number"<<endl;
    }
    return 0;
}