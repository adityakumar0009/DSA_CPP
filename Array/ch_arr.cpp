#include<iostream>
using namespace std;
int getlen(char ch[]){
    int count = 0;
    for(int i =0; ch[i]!='\0'; i++){
    count++;
    }
    return count;
}
int main(){
    char ch[20];
    cout<<"enter you name "<<endl;
    cin>>ch;
    //ch[2]='\0';
    cout<<"your name is "<<ch;
    cout<<endl;
    cout<<"lemgth->"<<getlen(ch);
}