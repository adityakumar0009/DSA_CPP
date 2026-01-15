#include<iostream>
using namespace std;
struct{
    int my_num;
    string my_string;
}My_struct;
int main(){
    My_struct.my_num = 1;
    My_struct.my_string = "Aditya";
    cout<<My_struct.my_num<<endl;
    cout<<My_struct.my_string<<endl;
    return 0;
}