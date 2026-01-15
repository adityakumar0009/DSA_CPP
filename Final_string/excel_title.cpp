#include<iostream>
using namespace std;
string title(int column_no){
    string result = "";
    while(column_no>0){
        column_no--;
        char ch = 'A'+(column_no%26);
        result = ch+result;
        column_no/=26;
    }
    return result;
}
int main(){
    int column_no = 28;
    cout<<"The title of the excel is "<<title(column_no);
    return 0;
}