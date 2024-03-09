#include<iostream>
using namespace std;
void printchar(char ch[],int size){
    cout<<"printing started"<<endl;
    for(int i =0 ;i<size; i++){
        cout<<ch[i]<<" ";
    }
}
int main(){
    char ch[10] = {'a','d','i','t','y','a'};
    int n = 10;
    printchar(ch,10);
}