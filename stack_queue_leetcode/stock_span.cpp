#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    vector<int> price = {100,80,60,70,60,75,85};

    //solution
    stack<int> st;
    vector<int> ans(price.size(),0);
    for(int i=0; i<price.size(); i++){
        while(st.size()>0 && price[i]>=price[st.top()]){
            st.pop();
        }
        if(st.empty()){
            ans[i] = i+1;
        }
        else{
            ans[i] = i-st.top(); //i-prev_high
        }
        st.push(i);
    }
    //print
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}