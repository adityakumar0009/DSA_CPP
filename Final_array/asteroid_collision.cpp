#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
vector<int> asteriod_collission(vector<int>& asteriods){
    stack<int> st;
    for(int i=0; i<asteriods.size(); i++){
        while(st.size()>0 && asteriods[i]<0 && st.top()>0){
            int sum = asteriods[i]+st.top();
            if(sum<0){
                st.pop();
            }
            else if(sum>0){
                asteriods[i] = 0;
            }
            else{
                st.pop();
                asteriods[i] = 0;
            }
        }
        if(asteriods[i]!=0){
            st.push(asteriods[i]);
        }
    }
    int s = st.size();
    vector<int> result;
    while(st.size()>0){
        result.push_back(st.top());
        st.pop();
    }
    reverse(result.begin(),result.end());
    return result;
}
int main(){
    vector<int> asteriods = {5, 10, -5};
    vector<int> result = asteriod_collission(asteriods);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}