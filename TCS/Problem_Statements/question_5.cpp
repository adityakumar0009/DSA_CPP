#include<iostream>
using namespace std;
int main(){
    int n,k,j,m,p;
    cin>>n>>k>>j>>m>>p;
    int banana_eat = m/k;
    int remain_banana = m%k;
    int peanut_eat = p/j;
    int remain_peanut = p%j;
    int left = n-(remain_banana+remain_peanut);
    if(remain_banana!=0 || remain_peanut!=0){
        left = left-1;
    }
    cout<<left;
    return 0;
}