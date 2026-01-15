#include<iostream>
#include<vector>
#include<stack>
using namespace std;
bool validate_stack(vector<int>& pushed,vector<int>& pooped){
    stack<int> st;
    int i =0;
    int j = 0;
    while(i<pushed.size() && j<pooped.size()){
        st.push(pushed[i]);
        while(st.size()>0 && j<pooped.size() && pooped[j]==st.top()){
            st.pop();
            j++;
        }
        i++;
    }
    return st.empty();
}
int main(){
    vector<int> pushed = {1, 2, 3, 4, 5};
    vector<int> pooped = {4, 5, 3, 2, 1};
    if(validate_stack(pushed,pooped)){
        cout<<"It is a validate stack"<<endl;
    }
    else{
        cout<<"It is not a validate stack"<<endl;
    }
    return 0;

}