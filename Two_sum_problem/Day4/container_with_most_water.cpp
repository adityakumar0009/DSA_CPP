#include<iostream>
#include<vector>
using namespace std;
int max_water(vector<int>& height){
    int max_water = 0;
    int left = 0;
    int right = height.size()-1;
    while(left<right){
        int w = right-left;
        int h = min(height[left],height[right]);
        int curr_water = w*h;
        max_water = max(max_water,curr_water);
        if(height[left]<height[right]){
            left++;
        }
        else{
            right--;
        }
    }
    return max_water;
}
int main(){
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout<<"container wit most water is "<<max_water(height);
    return 0;
}