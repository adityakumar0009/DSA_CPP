#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int get_celebrity(vector<vector<int>>& arr){
    stack<int> st;
    for(int i=0; i<arr.size(); i++){
        st.push(i);
    }
    while(st.size()>1){
        int i = st.top();
        st.pop();
        int j = st.top();
        st.pop();
        if(arr[i][j]==0){
            st.push(i);
        }
        else{
            st.push(j);
        }
    }
    int celeb = st.top();
    for(int i=0; i<arr.size(); i++){
        if(i!=celeb && arr[i][celeb]==0 && arr[celeb][i]==1){
            return -1;
        }
    }
    return celeb;
}
int main(){
    vector<vector<int>> arr = {{0,1,0},
                               {0,0,0},
                               {0,1,0}};

    int ans = get_celebrity(arr);
    cout<<" celebrity is "<<ans;                           
    return 0;
}