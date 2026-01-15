#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
vector<int> findmissingrepeating(vector<vector<int>>& grid){
    int n = grid.size();
    unordered_set<int> s;
    vector<int> ans;
    int a,b;
    int act_sum = 0;
    int exp_sum = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            act_sum+=grid[i][j];
            if(s.find(grid[i][j])!=s.end()){
                a = grid[i][j];
                ans.push_back(a);
            }
            else{
                s.insert(grid[i][j]);
            }
        }
    }
    exp_sum = (n * n) * (n * n + 1) / 2;
    b = exp_sum - (act_sum - a);
    ans.push_back(b);
    return ans;
}
int main(){
    vector<vector<int>> grid = {{1, 3}, {2, 2}};
    vector<int> result = findmissingrepeating(grid);
    cout << "Repeating: " << result[0] << ", Missing: " << result[1] << endl;
    return 0;
}