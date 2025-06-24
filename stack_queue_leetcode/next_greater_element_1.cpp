#include<iostream>
#include<vector>
#include<unordered_map>
#include<stack>
using namespace std;
vector<int> next_greater(vector<int>& num1,vector<int>& num2){
    unordered_map<int,int> m;
    stack<int> st;
    for(int i=num2.size()-1; i>=0; i--){
        while(st.size()>0 && num2[i]>=st.top()){
            st.pop();
        }
        if(st.empty()){
            m[num2[i]] = -1;
        }
        else{
            m[num2[i]] = st.top();
        }
        st.push(num2[i]);
    }
    vector<int> ans;
    for(int i=0; i<num1.size(); i++){
        ans.push_back(m[num1[i]]);
    }
    return ans;
}
int main(){
    vector<int> num1 = {4, 1, 2};
    vector<int> num2 = {1, 3, 4, 2};
    vector<int> result = next_greater(num1,num2);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}