#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int largest_arae_rectangle(vector<int>& heights){
    int n =heights.size();
    vector<int> left(n,0);
    vector<int> right(n,0);
    stack<int> st;
    //right smaller
    for(int i=n-1; i>=0; i--){
        while(st.size()>0 && heights[st.top()]>=heights[i]){
            st.pop();
        }
        if(st.empty()){
            right[i] = -1;
        }
        else{
            right[i] = st.top();
        }
        st.push(i);
    }
    //left smaller
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
    int largest_area = 0;
    for(int i=0; i<n; i++){
        int width = right[i]-left[i]-1;
        int curr_area = width*heights[i];
        largest_area = max(largest_area,curr_area);
    }
    return largest_area;
}
int main(){
    vector<int> heights = {2, 1, 5, 6, 2, 3};
    cout<<"The largest area of rectangle is "<<largest_arae_rectangle(heights);
    return 0;
}