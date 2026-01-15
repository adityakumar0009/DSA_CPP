#include<iostream>
using namespace std;
void sum_n(int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum=sum+i;
    }
    cout<<sum;
}
int main(){
    int n;
    cout<<"enter the number->";
    cin>>n;
    sum_n(n);
    return 0;
}