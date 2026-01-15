#include<iostream>
using namespace std;
void greed(){
    cout<<"Hello myself Aditya"<<endl;
}
int main(){
    //Null pointer
    // int* ptr = nullptr;
    // if(ptr==nullptr){
    //     cout<<"The pointer is pointing nothing"<<endl;
    // }
    // cout<<ptr;

    //Void pointer
    // Also known as a Generic Pointer, a void *can hold the address of any data type(int, float, char, etc.)
    // You must cast it first
    // int n = 10;
    // void* ptr = &n;
    // cout<<*(int*)ptr<<endl;

    //function pointer
    //void (*funcPtr)() = &greed; // Declaration of a function pointer
    //funcPtr();                  // Calls the greed function

    
    return 0;
}