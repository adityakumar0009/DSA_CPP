#include<iostream>
using namespace std;
void update(int **p2){
    //p2=p2+1;
    //kuch change nahi hoga   no

    //*p2 = *p2+1;
    //kuch change nahi hoga   yes

    **p2= **p2+1;
}
int main(){
    int i =5;
    int *p = &i;
    int **p2 = &p;

    cout<<i<<endl;
    cout<<p<<endl;
    cout<<p2<<endl;
    update(p2);
    cout<<i<<endl;
    cout<<p<<endl;
    cout<<p2<<endl;

}