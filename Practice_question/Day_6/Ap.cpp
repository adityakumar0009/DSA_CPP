#include<iostream>
using namespace std;
int Arthmetic_pro(int n){
    int ans = (3*n+7);
    return ans;
}
int main(){
    int number;
    cout<<"enter the number->";
    cin>>number;
    cout<<"the " <<number<< " term of ap is->"<<Arthmetic_pro(number);

    return 0;
}