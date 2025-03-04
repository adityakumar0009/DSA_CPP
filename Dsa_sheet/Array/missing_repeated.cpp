#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
vector<int> missing_repeated(vector<vector<int>> &grid){
    vector<int> ans;
    int n = grid.size();
    int a ,b;
    int expected_sum =0,actual_sum=0;
    unordered_set<int> s;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(s.find(grid[i][j])!=s.end()){
                a = grid[i][j];
                ans.push_back(grid[i][j]);
                break;
            }
            s.insert(grid[i][j]);
        }
    }
    expected_sum = (n*n)*(n*n+1)/2;
    b = expected_sum - (actual_sum - a);
    ans.push_back(b);
    return ans;
}
int main(){
    vector<vector<int>> grid = { {9, 1, 7},
                                 {8, 9, 2},
                                 {3,4,6}};
    vector<int> result = missing_repeated(grid);
    cout << "Repeated: " << result[0] << ", Missing: " << result[1] << endl;
    return 0;
}