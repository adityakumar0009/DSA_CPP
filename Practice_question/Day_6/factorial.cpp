#include<iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    for(int i =1; i<=n; i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int number;
    cout<<"enter the number->";
    cin>>number;
    cout<<"factoial of the number is->"<<factorial(number);
    return 0;
}