#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> one_zero(vector<vector<int>>& grid){
    int m = grid.size();
    int n = grid[0].size();
    vector<int> row_one(m,0);
    vector<int> col_one(n,0);
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(grid[i][j]==1){
                row_one[i]+=1;
                col_one[j]+=1;
            }
        }
    }
    vector<vector<int>> diff(m,vector<int>(n,0));
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            int onesRowi = row_one[i];
            int onesColj = col_one[j];
            int zerosRowi = m - onesRowi;
            int zerosColj = n - onesColj;
            diff[i][j] = onesRowi + onesColj - zerosRowi - zerosColj;
        }
    }
    return diff;
}
int main(){
    vector<vector<int>> grid = { {0, 1, 1},
                                 {1, 0, 1},
                                 {0, 0, 1} };
    vector<vector<int>> result = one_zero(grid);
    for(int i=0; i<result.size(); i++){
        for(int j=0; j<result[i].size(); j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }                              
}