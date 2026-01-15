#include<iostream>
using namespace std;
bool isArmstrong(int n){
    int copyN = n;
    int sum = 0;
    while(n!=0){
        int digit = n%10;
        sum+=(digit*digit*digit);
        n = n/10;
    }
    return sum = copyN;
}
int main(){
    int n = 153;
    if(isArmstrong(n)){
        cout<<"It is an armstrong number";
    }
    else{
        cout<<"It is not an armstrong number";
    }
    return 0;
}