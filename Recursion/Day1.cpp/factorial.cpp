#include<iostream>
using namespace std;
int factorial(int n){
    //base condition
    if(n==0){
        return 1;
    }
    int smaller_problem = factorial(n-1);
    int bigger_problem = n*smaller_problem;
    return bigger_problem;
}
int main(){
    int n;
    cin>>n;
    int ans = factorial(n);
    cout<<ans;
}