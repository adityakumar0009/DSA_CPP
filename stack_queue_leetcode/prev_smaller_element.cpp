#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> prev_small(vector<int>& num){
    stack<int> st;
    vector<int> ans(num.size());
    for(int i=0; i<num.size(); i++){
        while(st.size()>0 && num[i]<=st.top()){
            st.pop();
        }
        if(st.empty()){
            ans[i] = -1;
        }
        else{
            ans[i] = st.top();
        }
        st.push(num[i]);
    }
    return ans;
}
int main(){
    vector<int> num = {3,1,0,8,6};
    vector<int> result = prev_small(num);
    for(int i=0; i<num.size(); i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}