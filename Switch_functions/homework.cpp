#include<iostream>
using namespace std;
int main(){
    int amount;
    cout<<"enter the amount"<<endl;
    cin>>amount;
    int restAmount = amount %100;
    cout<<restAmount<<endl;
    int Restamount = restAmount%10;
    cout<<Restamount<<endl;
    char op;
    cout<<"enter the operation"<<endl;
    cin>>op;
    switch (op)
    {
        case '/' : cout<<"100 ruppess notes and 20 ruppes notes and ten ruppes notes "<<amount/100<<" "<<restAmount/20<<" "<<Restamount/10<<endl;
        break;
        default:
        cout<<"invalid amount"<<endl;
    }
}