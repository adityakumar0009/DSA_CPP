#include<iostream>
using namespace std;
int factorial(int n){
    //base class 
    if(n==0){
        return 1;
    }
    // int small_pro = factorial(n-1);
    // int bigger_pro = n*small_pro;
    return n*factorial(n-1);
}
int main(){
    int n;
    cin>>n;
    int ans = factorial(n);
    cout<<ans<<endl;
    return 0;
}