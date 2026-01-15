#include<iostream>
#include<vector>
using namespace std;
int trap(vector<int>& heights){
    int n = heights.size();
    vector<int> lmax(n,0);
    vector<int> rmax(n,0);
    lmax[0] = heights[0];
    rmax[n-1] = heights[n-1];
    //left max
    for(int i=1; i<n; i++){
        lmax[i] = max(lmax[i-1],heights[i]);
    }
    //right max
    for(int i=n-2; i>=0; i--){
        rmax[i] = max(rmax[i+1],heights[i]);
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        ans+=min(lmax[i],rmax[i])-heights[i];
    }
    return ans;
}
int main(){
    vector<int> heights = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << "water it can trap after raining. "<<trap(heights);
    return 0;
}