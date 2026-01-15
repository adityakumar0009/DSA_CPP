#include<iostream>
using namespace std;
enum level{
    Low = 1,
    Medium,
    High
};
int main(){
    enum level my_var = Medium;
    switch(my_var){
        case 1:
        cout<<"Low Level "<<endl;
        break;

        case 2:
        cout<<"Medium Level "<<endl;
        break;

        case 3:
        cout<<"High Level "<<endl;
        break;
    }
    return 0;
}