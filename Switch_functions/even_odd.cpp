#include<iostream>
using namespace std;
bool evenodd(int a){
    if(a%2==0){
        //cout<<"even no"<<endl;
        return 1;
    }
    else{
        //cout<<"odd number"<<endl;
        return 0;
    }
}
int main(){
    int n ;
    cin>>n;
    if(evenodd(n)){
        cout<<"even no"<<endl;
    }
    else{
        cout<<"odd no"<<endl;
    }
    return 0;
}