#include<iostream>
using namespace std;
int pow(int n){
    //base condition
    if(n==0){
        return 1;
    }
    //recursive call
    int smaller_problem = pow(n-1);
    int bigger_problem = 2*smaller_problem;
    return bigger_problem;
}
int main(){
    int n;
    cin>>n;
    int ans = pow(n);
    cout<<ans;
}