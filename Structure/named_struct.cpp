#include<iostream>
using namespace std;
struct car{
    int price;
    string model;
};
int main(){
    car car1;
    car1.price = 100000;
    car1.model = "Suziki";

    car car2;
    car2.price = 200000;
    car2.model = "Toyoto";

    cout<<car1.price<<" "<<car1.model<<endl;
    cout<<car2.price<<" "<<car2.model<<endl;
    return 0;
}