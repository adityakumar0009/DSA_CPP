#include<iostream>
using namespace std;
int mod_exp(int x, int n, int m){
    int res = 1;
    while(n>0){
        if(n&1){//odd
        res = ((res) * (x)%m)%m;
        }
        x=((x)%m*(x)%m)%m;
        n=n>>1;
    }
    return res;
}
int main(){
    int x,n,m;
    cout<<"enter the values->"<<endl;
    cin>>x>>n>>m;
    int ans = mod_exp(x,n,m);
    cout<<"answer is->"<<ans;
    return 0;
}