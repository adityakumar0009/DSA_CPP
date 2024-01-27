#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2==0){
        int sum=0;
        for(int i=0; i<=n; i++){
            sum=sum+i;
            cout<<sum<<endl;
        }
    }
}