#include<iostream>
using namespace std;

bool isevenodd(int a){
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
    if(isevenodd(n)){
        cout<<"even number"<<endl;
    }
    else{
        cout<<"odd number"<<endl;
    }
}