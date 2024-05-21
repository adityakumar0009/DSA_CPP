#include<iostream>
using namespace std;
void reach_home(int src,int dest){
    //base case
    cout<<"source "<<src<<"destination "<<dest<<endl;
    if(src==dest){
        cout<<"pahuch gaye"<<endl;
        return ;
    }
    src++;
    //recursive call
    reach_home(src,dest);

}
int main(){
    int dest = 10;
    int src = 1;
    reach_home(src,dest);
}