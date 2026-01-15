#include<iostream>
using namespace std;
int factorial(int n){
    int fac=1;
    for(int i=1; i<=n; i++){
        fac*=i;
    }
    return fac;
}
int ncr(int n, int r){
    int fact1 = factorial(n);
    int fact2 = factorial(r);
    int fact3 = factorial(n-r);
    return fact1/(fact2*fact3);
}
int main(){
    int n,r;
    cout<<"enter the vakue of n and r->"<<" ";
    cin>>n>>r;
    int ans = ncr(n,r);
    cout<<ans;
    return 0;
}