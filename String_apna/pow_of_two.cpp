#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
bool power_two(int n){
    for(int i=0; i<=30; i++){
        int ans = pow(2,i);
        if(ans == n){
            return true;
        }
    }
    return false;
}
int main(){
    int n = 8;
    if(power_two(n)){
        cout<<"the number is the power of 2 "<<endl;
    }
    else{
        cout<<"the number is not the power of 2"<<endl;
    }
    return 0;
}