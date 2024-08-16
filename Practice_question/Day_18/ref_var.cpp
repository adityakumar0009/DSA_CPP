#include<iostream>
using namespace std;
void update(int n){ //pass by value me hamesa copy create hote hai
    n++;
}
void update_2(int& n){//pass by reference
    n++;
}
int main(){
    int n = 5;
    cout<<"before value of n->"<<n<<endl;
    update_2(n);
    cout<<"after value of n->"<<n<<endl;
    return 0;
}