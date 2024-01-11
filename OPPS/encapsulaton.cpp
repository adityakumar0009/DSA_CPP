#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int age;
    int height;
    public:
    int getAge(){
        return this->age;
    }
};
int main(){
    student first;
    cout<<"sab sahi hal raha hai";
    return 0;
}




//encapculation : wrapping up data member and function
//fully encapculated class : all data memebers are private marked, access in same class.
//advantage : for information hiding,data hiding.
//advantage : security increases.
//advantage : if we want we can make our class " read only ".
//advantage : code reusability.
