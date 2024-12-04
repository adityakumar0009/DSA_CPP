#include<iostream>
using namespace std;
void print_num(int num){
    if(num==1){
        cout<<num<<" ";
        return ;
    }
    cout<<num<<" ";
    print_num(num-1);
}
int main(){
    int num = 100;
    print_num(num);
    return 0;
}