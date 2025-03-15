#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int largest_rectangle_area(vector<int>& heights){
    int n = heights.size();
    vector<int> lp(n,0);
    vector<int> rp(n,0);
    stack<int> s;
    //right portion
    for(int i=n-1; i>=0; i--){
        while(s.size()>0 && heights[s.top()]>=heights[i] ){
            s.pop();
        }
        rp[i] = s.empty() ? n : s.top();
        s.push(i);
    }
    //stack empty
    while(!s.empty()){
        s.pop();
    }
    //left portion
    for(int i=0; i<n; i++){
        while(s.size()>0 && heights[s.top()]>=heights[i]){
            s.pop();
        }
        lp[i] = s.empty() ? -1 : s.top();
        s.push(i);
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        //current area
        int width = rp[i] - lp[i] - 1;
        int current_area = heights[i] * width;
        ans = max(ans,current_area);
    }
    return ans;
}
int main(){
    vector<int> heights = {2, 1, 5, 6, 2, 3};
    cout<<"largest area of rectangle is -> "<<largest_rectangle_area(heights);
    return 0;
}