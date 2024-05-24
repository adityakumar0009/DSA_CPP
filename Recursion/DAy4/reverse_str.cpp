#include<iostream>
using namespace std;
void reverse(string& name , int i, int j){
    cout<<"call received from "<<name<<endl;
    if(i>j){
        return ;
    }
    swap(name[i],name[j]);
    i++;
    j--;
    reverse(name,i,j);
}
int main(){
    string name = "aditya";
    cout<<endl;
    reverse(name,0,name.length()-1);
    cout<<endl;
    cout<<name<<endl;

}