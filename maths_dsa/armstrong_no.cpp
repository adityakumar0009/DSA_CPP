//a armstrong no is a number which is equal to the sum of cubes of its digit
#include<iostream>
using namespace std;
bool is_armstrong(int n){
    int copyN = n;
    int sum_cubes = 0;
    while (n!=0)
    { 
        int digit = n%10;
        sum_cubes+=digit*digit*digit;
        n = n/10;
    }
    return sum_cubes==copyN;
}
int main(){
    int n = 153;
    if(is_armstrong(n)){
        cout<<"it is an armstrong number"<<endl;
    }
    else{
        cout<<"it is not an armstong number"<<endl;
    }
    return 0;
}