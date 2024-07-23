#include<iostream>
using namespace std;

int fibonacci(int n){
    if (n == 0) {
        return 0;}
    if (n == 1) 
    {return 1;}

    int a = 0;
    int b = 1;
    int next_number;

    for(int i = 2; i <= n; i++){
        next_number = a + b;
        a = b;
        b = next_number;
    }

    return next_number;
}

int main(){
    int number;
    cout << "Enter the number: ";
    cin >> number;
    cout << "The " << number << "th Fibonacci number is: " << fibonacci(number) << endl;
    return 0;
}
