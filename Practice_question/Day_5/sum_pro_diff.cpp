#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number->"<<endl;
    cin>>n;
    int product = 1;
    int sum = 0;
    while (n!=0)
    {
        product = product*(n%10);
        sum = sum+(n%10);
        n=n/10;
    }
    int result = product-sum;
    cout<<result;
    return 0;
}