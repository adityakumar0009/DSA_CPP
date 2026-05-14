#include<iostream>
#include<cmath>
using namespace std;
double gp_sum(double a,double r,int n){
    return a*(pow(r,n)-1)/(r-1);
}
int main(){
    int a = 2;
    int r = 3;
    int n = 4;
    cout<<"Geometry sum is "<<gp_sum(a,r,n);
    return 0;
}