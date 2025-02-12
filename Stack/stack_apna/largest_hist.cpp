#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class Solution{
    public:
    int largestRectangleArea(vector<int> &heights){
        int n = heights.size();
        vector<int> left(n,0);
        vector<int> right(n,0);
        stack<int> s;
        //right smaller
        for(int i=n-1; i>=0; i--){
            while(s.size()>0 && heights[s.top()]>=heights[i]){
                s.pop();
            }
            right[i] = s.empty() ?n:s.top();
            s.push(i);
        }
        //left smaller
        for(int i=0; i<n; i++){
            while(s.size()>0 && heights[s.top()]>heights[i]){
                s.pop();
            }
            left[i] = s.empty() ? -1:s.top();
            s.push(i);
        }
        int ans = 0;
        for(int i=0; i<n; i++){
            int width = right[i]-left[i]-1;
            int curr_area = heights[i]*width;
            ans = max(ans,curr_area);
        }
        return ans;
    }
};
int main(){
    Solution sol;
    vector<int> heights = {2,1,5,6,2,3};
    cout<<"largest area rectangle - "<<sol.largestRectangleArea(heights)<<endl;
    return 0;
}