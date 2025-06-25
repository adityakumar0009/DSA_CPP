#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> asteriod_collission(vector<int>& asteroids){
    stack<int> st;
    int n = asteroids.size();
    for(int i=0; i<n; i++){
        while(st.size()>0 && asteroids[i]<0 && st.top()>0){
            int sum = asteroids[i] + st.top();
            if(sum<0){
                st.pop();
            }
            else if(sum>0){
                asteroids[i] = 0;
            }
            else{
                asteroids[i] = 0;
                st.pop();
            }
        }
        if(asteroids[i]!=0){
            st.push(asteroids[i]);
        }
    }
    int s = st.size();
    vector<int> result(s);
    int i = s - 1;
    while(!st.empty()){
        result[i] = st.top();
        st.pop();
        i--;
    }
    return result;
}
int main(){
    vector<int> asteroids = {5, 10, -5};
    vector<int> ans  = asteriod_collission(asteroids);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}