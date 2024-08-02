#include<iostream>
using namespace std;
int fibonacci(int n){
    //base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main(){
    int n;
    cout<<"enter the number->"<<" ";
    cin>>n;
    int result = fibonacci(n);
    cout<<result;
    return 0;
}