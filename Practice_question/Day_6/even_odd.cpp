#include<iostream>
using namespace std;
bool isEven(int a){
    if(a&1){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int n;
    cin>>n;
    if(isEven(n)){
        cout<<"tihs is a even number"<<endl;
    }
    else{
        cout<<"this is a odd number";
    }
    return 0;
}