#include<iostream>
using namespace std;
void Even_odd(int n){
    if(n%2==0){
        cout<<"this is a even number"<<endl;
    }
    else{
        cout<<"this is a odd number"<<endl;
    }
}


int main(){
    int number;
    cout<<"enter the number->";
    cin>>number;
    Even_odd(number);
    return 0;
}