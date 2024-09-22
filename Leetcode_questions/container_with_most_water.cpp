#include<iostream>
#include<vector>
using namespace std;
int con_max_water(vector<int> height){
    int lp = 0;
    int rp = height.size()-1;
    int max_water = 0;
    while(lp<rp){
        int w = rp-lp;
        int h = min(height[lp],height[rp]);
        int current_water = w*h;
        max_water = max(max_water,current_water);
         if(height[lp]<height[rp]){
            lp++;
         }
         else{
            rp--;
         }
    }
    return max_water;
}
int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout<<"container with max water->"<<con_max_water(height);
    return 0;
}