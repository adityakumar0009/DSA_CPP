#include<iostream>
using namespace std;
void print_dig(int n, string arr[]){
    //base case
    if(n==0){
        return ;
    }
    int digit = n%10;//extract last digit
    n= n/10;//update last digit
    print_dig(n,arr);
    cout<<arr[digit]<<" ";
}
int main(){
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    print_dig(n,arr);
    return 0;
}