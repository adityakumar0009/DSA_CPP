#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int height_checker(vector<int>& heights){
    int n = heights.size();
    vector<int> new_heights = heights;
    sort(new_heights.begin(),new_heights.end());
    int count = 0;
    for(int i=0; i<n; i++){
        if(heights[i]!=new_heights[i]){
            count++;
        }
    }
    return count;
}
int main(){
    vector<int> heights = {1, 1, 4, 2, 1, 3};
    cout<<"Height Checker "<<height_checker(heights);
    return 0;
}