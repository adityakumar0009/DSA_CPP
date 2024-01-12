#include<iostream>
using namespace std;
//base case
int factorial(int n){
    if(n==0){
        return 1;}
    //int chotti = factorial(n-1);
    //int badi = n*chotti;
    return n*factorial(n-1);
}
int main(){
    int n;
    cin>>n;
    int ans = factorial(n);
    cout<< ans <<endl;
    return 0;
}
//recursion : when a function is calling itself is called recursion.
//recursion : complex problem solution depend upon same problem of same time then we use recursion.
//in recursion we need base case for where two stop.
//in recursion we need recurance relation.
//int recursion base case and recursive relation is mandatory.
//if base case is not it causes segmenataion fault due to stack overflow.
//when recursive relation comes at last then it is called tail recursion.
//when recursive relation comes berore processing then it is called head recursion.