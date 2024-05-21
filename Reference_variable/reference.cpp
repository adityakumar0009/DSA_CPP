#include<iostream>
using namespace std;
void update1(int& n){
    n++;
}
void update2(int n){
    n++;
}
int main(){
    int i =5;
    cout<<i<<endl;
    int &j = i;
    cout<<j<<endl;
    j++;
    cout<<i<<endl;
    cout<<j<<endl;

    int n;
    cin>>n;
    cout<<n<<endl;
}