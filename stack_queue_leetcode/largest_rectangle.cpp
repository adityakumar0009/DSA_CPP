#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int largest_histogram(vector<int>& nums){
    int n = nums.size();
    stack<int> st;
    vector<int>right(n,0);
    vector<int>left(n,0);
    //right smaller
    for(int i=n-1; i>=0; i--){
        while(st.size()>0 && nums[st.top()]>=nums[i]){
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
    //left smaller  similar to previous smaller element
    for(int i=0; i<n; i++){
        while(st.size()>0 && nums[st.top()]>=nums[i]){
            st.pop();
        }
        if(st.empty()){
            left[i]= -1;
        }
        else{
            left[i] = st.top();
        }
        st.push(i);
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        int width = right[i] - left[i] -1;
        int curr_area = nums[i] * width;
        ans = max(ans,curr_area);
    }
    return ans;
}
int main(){
    vector<int> nums = {2, 1, 5, 6, 2, 3};
    cout<<"largest_rectangle histogram is "<<largest_histogram(nums);
    return 0;
}