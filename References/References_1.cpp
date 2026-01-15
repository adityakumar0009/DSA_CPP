// A reference variable is an alias for an existing variable. It is created using the & operator:
#include<iostream>
using namespace std;
int main(){
    string food = "chicken";
    string &meal = food;
    cout<<food<<endl;
    cout<<meal<<endl;
    return 0;
}