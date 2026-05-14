//Armstrong number
#include<iostream>
using namespace std;
bool is_armstrong(int n){
    int original = n;
    int sum = 0;
    while(n>0){
        int digit = n%10;
        sum+=digit*digit*digit;
        n = n/10;
    }
    if(sum==original){
        return true;
    }
    return false;
}
int main(){
    int n = 153;
    if(is_armstrong(n)){
        cout<<"It is a armstrong number"<<endl;
    }
    else{
        cout<<"It is not a armstrong number"<<endl;
    }
    return 0;
}
