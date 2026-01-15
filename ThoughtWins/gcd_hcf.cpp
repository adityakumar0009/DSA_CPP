#include<iostream>
using namespace std;
int gcd_hcf(int a,int b){
    int gcd = 1;
    for(int i=1; i<=min(a,b); i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }
    return gcd;
}
int main(){
    int a = 20;
    int b = 28;
    cout<<"The gcd between two number is "<<gcd_hcf(a,b);
    return 0;
}

// for(int i=num.size()-1; i>=0; i--){
//             if((num[i]-'0')%2!=0){
//                 return num.substr(0,i+1);
//             }
//         }
//         return"";