#include<iostream>
using namespace std;
int title_number(string title){
    int result = 0;
    for(int i=0; i<title.size(); i++){
        char ch = title[i];
        int val = ch-'A'+1;
        result = result*26+val;
    }
    return result;
}
int main(){
    string title = "AB";
    cout<<"Title number is "<<title_number(title);
    return 0;
}