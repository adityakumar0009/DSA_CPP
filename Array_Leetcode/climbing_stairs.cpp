#include<iostream>
using namespace std;
int climb_stairs(int n){
    if(n<=2){
        return n;
    }
    int a = 1;
    int b = 2;
    for(int i=3; i<=n; i++){
        int temp = b;
        b = a+b;
        a = temp;
    }
    return b;
}
int main(){
    int n = 3;
    cout << "distinct ways can you climb to the top "<<climb_stairs(n);
    return 0;
}