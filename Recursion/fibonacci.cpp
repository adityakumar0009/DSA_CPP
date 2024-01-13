#include<iostream>
using namespace std;
int fibo(int n){
    //base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    //recursive case
    int fibonacci = fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    cin>>n;
    int ans = fibo(n);
    cout<<ans<<endl;
    return 0;
}