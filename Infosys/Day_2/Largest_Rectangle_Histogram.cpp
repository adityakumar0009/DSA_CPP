#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int largest_rectangle(vector<int>& heights){
    int n = heights.size();
    vector<int> left(n,0);
    vector<int> right(n,0);
    stack<int> st;
    //Right smaller element
    for(int i=n-1; i>=0; i--){
        while(st.size()>0 && heights[st.top()]>=heights[i]){
            st.pop();
        }
        if(st.empty()){
            right[i] = n;
        }
        else{
            right[i] = st.top();
        }
        st.push(i);
    }
    while(!st.empty()){
        st.pop();
    }
    //Left smaller element
    for(int i=0; i<n; i++){
        while(st.size()>0 && heights[st.top()]>=heights[i]){
            st.pop();
        }
        if(st.empty()){
            left[i] = -1;
        }
        else{
            left[i] = st.top();
        }
        st.push(i);
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        int width = right[i]-left[i]-1;
        int curr_Area = heights[i] * width;
        ans = max(ans,curr_Area);
    }
    return ans;
}
int main(){
    vector<int> heights = {2, 1, 5, 6, 2, 3};
    cout<<"Largest area of rectangle is "<<largest_rectangle(heights);
    return 0;
}