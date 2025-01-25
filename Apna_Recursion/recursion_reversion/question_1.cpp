#include<iostream>
using namespace std;
void print_number(int n){
    if(n==1){
        cout<<"1\n"<<" ";
        return ;
    }
    cout<<n<<" ";
    print_number(n-1);
}
int main(){
    print_number(10);
    return 0;
}