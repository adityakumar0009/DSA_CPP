#include<iostream>
#include<vector>
using namespace std;
class solution{
    public:
    int trapp_rainwater(vector<int>& heights){
        int n = heights.size();
        int ans = 0;
        int l =0;
        int r = n-1;
        int lmax = 0;
        int rmax = 0;
        while(l<r){
            lmax = max(lmax,heights[l]);
            rmax = max(rmax,heights[r]);
            if (lmax < rmax)
            {
                ans += lmax - heights[l];
                l++;
            }
            else
            {
                ans += rmax - heights[r];
                r--;
            }
        }
        return ans;
    }
};
int main(){
    vector<int> heights = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    solution sol;
    cout << "Trapping rainwater -> " << sol.trapp_rainwater(heights);
    return 0;
}