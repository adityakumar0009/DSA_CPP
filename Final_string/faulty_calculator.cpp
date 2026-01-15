#include<iostream>
#include<algorithm>
using namespace std;
string faulty_calculator(string s){
    int n = s.size();
    string result = "";
    for(int i=0; i<s.size(); i++){
        if(s[i]=='i'){
            reverse(result.begin(),result.end());
        }
        else{
            result.push_back(s[i]);
        }
    }
    return result;
}
int main(){
    string s = "string";
    cout << "inal string that will be present on your laptop screen " << faulty_calculator(s);
    return 0;
}