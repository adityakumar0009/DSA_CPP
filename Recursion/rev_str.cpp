#include<iostream>
using namespace std;
void reverse(string& str,int i, int j){
    //pass by reference
    cout<<"call receive for"<<str<<endl;
    //base class
    if(i>j){
        return ;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    //recursive relation
    reverse(str,i,j);
}
int main(){
    string name = "aditya";
    reverse(name,0,name.length()-1);
    cout<<name<<endl;
    return 0;
}