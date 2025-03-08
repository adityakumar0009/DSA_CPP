#include<iostream>
using namespace std;
double my_pow(double x, int n){
    if(n==0){
        return 1.0;
    }
    if(n==1){
        return x;
    }
    if(x==0){
        return 0.0;
    }
    if(x==1){
        return 1.0;
    }
    if(x==-1 && n%2==0){
        return 1.0;
    }
    if(x==-1 && n%2!=0){
        return -1.0;
    }
    long bin_form = n;
    if(n<0){
        x = 1/x;
        bin_form = -bin_form;
    }
    double ans = 1;
    while(bin_form>0){
        if(bin_form%2==1){
            ans*=x;
        }
        x*=x;
        bin_form/=2;
    }
    return ans;
}
int main(){
    int x;
    cout<<"enter the first number ";
    cin>>x;
    int n;
    cout << "enter the second number ";
    cin >> n;
    cout<<"answer is -> "<<my_pow(x,n);
    return 0;
}