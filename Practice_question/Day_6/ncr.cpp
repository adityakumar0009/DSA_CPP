#include<iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    for(int i = 1 ;i<=n; i++){
        fact = fact*i;
    }
    return fact;
}
int ncr(int n, int r){
    int num = factorial(n);
    int deno = factorial(r)*factorial(n-r);
    int ans = num/deno;
    return ans;
}
int main(){
    int n, r;
    cout << "Enter values for n and r: ";
    cin >> n >> r;
    cout << "Answer is -> " << ncr(n, r) << endl;
    return 0;
}
