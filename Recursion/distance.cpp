#include<iostream>
using namespace std;
void reachdest(int destination, int start){
    cout<<"source"<<start<<"destination"<<destination<<endl;
    //base case
    if(destination==start){
        cout<<"pahuch gaye"<<endl;
        return ;
    }
    //processing
    start++;
    //recursive cell
    reachdest(destination,start);
}
int main(){
    int destination = 10;
    int start = 1; 
    reachdest(destination,start);
    return 0;
}