#include<iostream>
using namespace std;
void say_digit(int n, string arr[]){
    //base case
    if(n==0){
        return ;
    }
    else{
        int digit = n%10;
        n=n/10;
        //recursive call
        say_digit(n,arr);
        cout<<arr[digit]<<" ";
    }
}
int main(){
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    cout<<endl;
    say_digit(n,arr);
    cout<<endl<<endl;
    return 0;
}