#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int dfs(int i,int j,int n,int m,vector<vector<bool>>& vis,vector<vector<int>>& grid){
    if(i<0 || j<0 || i>=n || j>=m || grid[i][j]==0 || vis[i][j]){
        return 0;
    }
    vis[i][j] = true;
    int ans = 1;
    ans+=dfs(i-1,j,n,m,vis,grid);//Top
    ans+=dfs(i+1,j,n,m,vis,grid);//Bottom
    ans+=dfs(i,j+1,n,m,vis,grid);//Right
    ans+=dfs(i,j-1,n,m,vis,grid);//left
    return ans;
}
int max_area_island(vector<vector<int>>& grid){
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    int max_area = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(grid[i][j]==1 && !vis[i][j]){
                int area = dfs(i, j, n, m, vis, grid);
                max_area = max(max_area,area);
            }
        }
    }
    return max_area;
}
int main(){
    vector<vector<int>> grid = { {0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
                                 {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0},
                                 {0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
                                 {0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0},
                                 {0, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 0},
                                 {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
                                 {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0},
                                 {0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0}};
    cout<<"Maximum area of island is "<<max_area_island(grid);                             
    return 0;
}