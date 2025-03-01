#include<iostream>
using namespace std;
int reverse(int num){
    int ans = 0;
    while(num!=0){
        int digit = num%10;
        ans = (ans*10) + digit;
        num = num/10; 
    }
    return ans;
}
bool is_afterreversal(int num){
    return num == reverse(reverse(num));
}
int main(){
    int num = 1800;
    if(is_afterreversal(num)){
        cout << "Number is same After a Double Reversal"<<endl;
    }
    else{
        cout<< "Number is not same After a Double Reversal"<<endl;
    }
    return 0;
}