#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
vector<int> missing_repeated(vector<vector<int>>& grid){
    vector<int> ans;
    int n = grid.size();
    unordered_set<int> s;
    int a = 0;
    int b = 0;
    int exp_sum =0;
    int act_sum = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            act_sum+=grid[i][j];
            if(s.find(grid[i][j])!=s.end()){
                a = grid[i][j];
                ans.push_back(a);
            }
            s.insert(grid[i][j]);
        }
    }
    exp_sum = (n*n)*(n*n+1)/2;
    b = exp_sum-(act_sum-a);
    ans.push_back(b);
    return ans;
}
int main(){
    vector<vector<int>> grid = { {1, 3},{2,2} };
    vector<int> result = missing_repeated(grid);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}