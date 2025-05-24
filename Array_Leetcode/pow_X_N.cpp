#include<iostream>
using namespace std;
double My_power(double x,int n){
    if(n==0){
        return 1.0;
    }
    if(x==0){
        return 0.0;
    }
    if(x==-1 && n%2==0){
        return 1.0;
    }
    if(x==-1 && n%2!=0){
        return -1.0;
    }
    int bin_form = n;
    int ans = 1;
    if(n<0){
        x = 1/x;
        bin_form = -bin_form;
    }
    while(bin_form>0){
        if(bin_form%2==1){
            ans*=x;
        }
        x *= x;
        bin_form/=2;
    }
    return ans;
}
int main(){
    double x = 2;
    int n = 10;
    cout<<"the answer is "<<My_power(x,n);
    return 0;
}