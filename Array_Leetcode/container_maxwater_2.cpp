#include<iostream>
#include<vector>
using namespace std;
int max_water(vector<int>& ans){
    int max_water = 0;
    int lp = 0;
    int rp = ans.size()-1;
    while(lp<rp){
        int width = rp-lp;
        int height = min(ans[lp],ans[rp]);
        int area = width*height;
        max_water = max(max_water,area);
        if(ans[lp]<ans[rp]){
            lp++;
        }
        else{
            rp--;
        }
    }
    return max_water;
}
int main(){
    vector<int> ans = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout<<"container with maximum water is "<<max_water(ans);
    return 0;
}