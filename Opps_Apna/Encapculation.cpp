#include<iostream>
using namespace std;
class My_salary{
    private:
    int salary;
    public:
    void setSalary(int s){
        salary = s;
    }
    int getSalary(){
        return salary;
    }
};
int main(){
    My_salary My_obj;
    My_obj.setSalary(50000);
    cout<<My_obj.getSalary();
    return 0;
}

// The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users.
// Increased security of data