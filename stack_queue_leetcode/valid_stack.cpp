#include<iostream>
#include<vector>
#include<stack>
using namespace std;
bool valid_stack(vector<int>& pushed, vector<int>& popped){
    int i = 0;
    int j = 0;
    stack<int> st;
    while(i<pushed.size() && j<pushed.size()){
        st.push(pushed[i]);
        while(!st.empty() && j<pushed.size() && popped[j]==st.top()){
            st.pop();
            j++;
        }
        i++;
    }
    return st.empty();
}
int main(){
    vector<int> pushed = {1, 2, 3, 4, 5};
    vector<int> popped = {4, 5, 3, 2, 1};
    if(valid_stack(pushed,popped)){
        cout<<"it is a valid stack ";
    }
    else{
        cout<<"it is not a valid stack ";
    }
    return 0;
}