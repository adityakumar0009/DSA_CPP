// Perfect number = number jiska sum of proper divisors (khud ko chhod ke) usi number ke equal ho
#include<iostream>
using namespace std;
bool is_perfect(int n){
    int sum = 0;
    int copy_no = n;
    for(int i=1; i<n; i++){
        if(n%i==0){
            sum+=i;
        }
    }
    return sum==copy_no;
}
int main(){
    int n = 28;
    if(is_perfect(n)){
        cout<<"It is a perfect number";
    }
    else{
        cout<<"It is not a perfect number";
    }
    return 0;
}