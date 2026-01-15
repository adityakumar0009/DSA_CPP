#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int largest_area_rectangle(vector<int>& heights){
    int n = heights.size();
    stack<int> st;
    vector<int> left(n,0);//left smaller
    vector<int> right(n,0);//right smaller
    //right smaller
    for(int i=n-1; i>=0; i--){
        while(st.size()>1 && heights[st.top()]>=heights[i]){
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
    while(st.size()>0){
        st.pop();
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
    int max_area = 0;
    for(int i=0; i<n; i++){
        int width = right[i]-left[i]-1;
        int curr_area = width*heights[i];
        max_area = max(curr_area,max_area);
    }
    return max_area;
}
int main(){
    vector<int> heights = {2, 1, 5, 6, 2, 3};
    cout<<"The largest area of rectangle is "<<largest_area_rectangle(heights);
    return 0;
}