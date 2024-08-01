#include<iostream>
using namespace std;
void reverse_str(char name[],int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        swap(name[s++],name[e--]);
    }
}
int get_len(char name[]){
    int count = 0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cout<<"enter your name->"<<endl;
    cin>>name;
    cout<<"your name is->"<<" ";
    cout<<name;
    int len = get_len(name);
    cout<<"length is->"<<len<<endl;
    reverse_str(name,len);
    cout<<"your name is->"<<" ";
    cout<<name<<endl;
    return 0;
}