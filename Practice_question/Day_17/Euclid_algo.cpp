#include<iostream>
using namespace std;
int gcd(int a, int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while ((a!=b))
    {
        if(a<b){
        b=b-a;
        }
    else{
        a=a-b;
        }
    }
    return a;
}
int main(){
    int a,b;
    cout<<"enter the first and second element->"<<endl;
    cin>>a>>b;
    int ans = gcd(a,b);
    cout<<"the gcd of->"<<a<<" and "<<b<<" is "<<ans<<endl;
    return 0;
}