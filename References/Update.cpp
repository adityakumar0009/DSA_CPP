#include<iostream>
using namespace std;
int main(){
    string food = "chicken";
    string &meal = food;

    meal="vegetable";//update

    cout<<food<<" "<<meal<<endl;
    
    return 0;
}