#include<iostream>
using namespace std;
void reach_home(int src,int des){
    cout<<"source->"<<src<<"destination->"<<des<<endl;
    if(src==des){
        cout<<"pahuch gaye"<<endl;
        return ;
    }
    src++;
    reach_home(src,des);
}
int main(){
    int src = 6;
    int des = 10;
    reach_home(src,des);
    return 0;
}