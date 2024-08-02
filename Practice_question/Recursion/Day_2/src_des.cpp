#include<iostream>
using namespace std;
void reachHome(int src,int des){
    cout<<"source "<<src<<"destination "<<des<<endl;;
    //base case
    if(src==des){
        cout<<"we have reached"<<endl;
        return ;
    }
    src++;
    //recursive call
    reachHome(src,des);
}
int main(){
    int src=1;
    int des=10;
    reachHome(src,des);
    return 0;
}