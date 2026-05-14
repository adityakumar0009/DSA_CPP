#include<iostream>
using namespace std;
int Ap_sum(int a,int d, int n){
    return (n*(2*a+(n-1)*d))/2;
}
int main(){
    int a = 2;
    int d = 3;
    int n = 5;
    cout<<"Sum of Ap is "<<Ap_sum(a,d,n);
    return 0;
}