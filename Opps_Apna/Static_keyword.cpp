#include<iostream>
using namespace std;
void fun(){
    static int x = 0; //init statement - 1run
    cout<<x<<endl;
    x++;
}
int main(){
    fun();
    fun();
    fun();
    return 0;
}

//variable dec as static in fun are created and initialised once for a lifetime of the program
//