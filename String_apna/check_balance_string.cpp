#include<iostream>
using namespace std;
bool is_balance(string& num){
    int even_sum = 0;
    int odd_sum = 0;
    for(int i=0; i<num.size(); i++){
        int digit = num[i] - '0';
        if(i%2==0){
            even_sum+=digit;
        }
        else{
            odd_sum+=digit;
        }
    }
    if(even_sum==odd_sum){
        return true;
    }
    return false;
}
int main(){
    string num = "1234";
    if(is_balance(num)){
        cout<<"string is  balance string"<<endl;
    }
    else{
        cout<<"it is not a balanced string"<<endl;
    }
    return 0;
}