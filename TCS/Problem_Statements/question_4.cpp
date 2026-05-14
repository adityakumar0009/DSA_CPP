#include<iostream>
using namespace std;
char single(char arr[],int n){
    char Xor = 0;
    for(int i=0; i<n;i++){
        Xor^=arr[i];
    }
    return Xor;
}
int main(){
    int n;
    cin>>n;
    char arr[n];
    for(int i=0;i<n; i++){
        cin>>arr[i];
    }
    cout<<"Single char is "<<single(arr,n);
    return 0;
}