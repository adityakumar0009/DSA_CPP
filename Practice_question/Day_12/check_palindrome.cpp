#include<iostream>
using namespace std;
int get_len(char name[]){
    int count = 0;
    for(int i=0; i<name[i]!='\0'; i++){
        count++;
    }
    return count;
}
void reverse(char name[],int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        swap(name[s++],name[e--]);
    }
}
bool is_palindrome(char name[],int n){
    int s = 0;
    int e = n-1;
    while (s<=e)
    {
        if(name[s]!=name[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
int main(){
    char name[20];
    cout<<"enter your name"<<endl;
    cin>>name;
    cout<<"len of the string is->"<<get_len(name)<<endl;
    int len = get_len(name);
    reverse(name,len);
    cout<<"reverse is->"<<name;
    cout<<endl;
    cout<<"palindrome or not->"<<is_palindrome(name,len);
    return 0;
}