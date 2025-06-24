#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int Operate(int a,int b,string tokens){
    if(tokens=="+"){
        return a+b;
    }
    if(tokens=="-"){
        return a-b;
    }
    if(tokens=="*"){
        return long(a)*long(b);
    }
    if(tokens=="/"){
        return a/b;
    }
    return -1;
}
int rev_polish(vector<string>& tokens){
    stack<int> st;
    for(int i=0; i<tokens.size(); i++){
        if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
            int b = st.top();
            st.pop();

            int a = st.top();
            st.pop();

            int result = Operate(a,b,tokens[i]);
            st.push(result);
        }
        else{
            st.push(stoi(tokens[i]));
        }
    }
    return st.top();
}
int main(){
    vector<string> tokens = {"2", "1", "+", "3", "*"};
    cout << "the value of the expression is "<<rev_polish(tokens);
    return 0;
}