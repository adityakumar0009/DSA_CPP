#include<iostream>
using namespace std;
string convert(string s,int num_row){
    if(num_row==1){
        return s;
    }
    string result = "";
    int jump = (num_row-1)*2;
    for(int i=0; i<num_row; i++){
        for(int j=i; j<s.size(); j+=jump){
        result+=s[j];
        //for middle element
        if(i>0 && i<num_row-1 && (j+jump-2*i)<s.size()){
            result += s[j + jump - 2 * i];
        }
        }
    }
    return result;
}
int main(){
    string s = "PAYPALISHIRING";
    int num_row = 3;
    cout<<"Zigzag conversion is "<<convert(s,num_row);
    return 0;
}