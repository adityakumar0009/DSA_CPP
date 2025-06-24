#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    vector<int> arr = {6,8,0,1,3};
    vector<int> ans(arr.size(),0);
    //next greater element
    stack<int> st;
    for(int i=arr.size()-1; i>=0; i--){
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        if(st.empty()){
            ans[i] = -1;
        }
        else{
            ans[i] = st.top();
        }
        st.push(arr[i]);
    }
    //print
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}