#include<iostream>
using namespace std;
int reverse(char ch[], int n){
    int s = 0;
    int e =n-1;
    while(s<e){
        swap(ch[s++],ch[e--]);
    }
}
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
    int len = getlen(ch);
    cout<<"lemgth->"<<len<<endl;
    reverse(ch,len);
    cout<<"your name is->"<<ch<<endl;
}