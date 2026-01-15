#include<iostream>
using namespace std;
int climbing_stairs(int n){
    if(n==0){
        return 1;
    }
    int a = 1,b = 2;
    for(int i=3; i<=n; i++){
        int temp = a+b;
        a = b;
        b = temp;
    }
    return b;
}
int main(){
    int n = 5;
    cout << " distinct ways can you climb to the top "<<climbing_stairs(n);
    return 0;
}