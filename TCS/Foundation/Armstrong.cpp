#include<iostream>
#include<cmath>
using namespace std;
bool is_armstrong(int n){
    int copy_no = n;
    int sum = 0;
    int digits = 0;
    int temp = n;
    while(temp > 0){
        digits++;
        temp /= 10;
    }
    while(n>0){
        int digit = n%10;
        sum+=(int)pow(digit,digits);
        n = n/10;
    }
    return sum==copy_no;
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

// output ye hai It is not an armstrong number