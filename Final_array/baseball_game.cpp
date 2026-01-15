#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int basket_ball(vector<string>& operations){
    stack<int> st;
    int n = operations.size();
    for(int i=0; i<n; i++){
        if(operations[i]=="C"){
            st.pop();
        }
        else if(operations[i]=="D"){
            st.push(2*st.top());
        }
        else if(operations[i]=="+"){
            int top1 = st.top();
            st.pop();
            int top2 = st.top();
            st.push(top1);
            st.push(top1+top2);
        }
        else{
            st.push(stoi(operations[i]));
        }
    }
    int sum = 0;
    while(st.size()>0){
        sum+=st.top();
        st.pop();
    }
    return sum;
}
int main(){
    vector<string> operations = {"5", "2", "C", "D", "+"};
    cout << "the sum of all the scores on the record after applying all the operations  "<<basket_ball(operations);
    return 0;
}