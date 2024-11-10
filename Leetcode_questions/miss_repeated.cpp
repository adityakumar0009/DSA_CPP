#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
vector<int> miss_repeated(vector<vector<int>>& grid){
    vector<int> ans;
    unordered_set<int>s;
    int n = grid.size();
    int a,b;
    int exp_sum = 0;
    int act_sum = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            act_sum+=grid[i][j];
            if(s.find(grid[i][j])!=s.end()){
                a = grid[i][j];
                break;
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
    vector<vector<int>> grid = {
        {{1,2,3},
        {4,6,9},
        {7,8,9}}
    };
    vector<int> result = miss_repeated(grid);
    cout<<"missing->"<<result[0]<<" "<<"repeated->"<<result[1]<<endl;
    return 0;
}