#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int rotting_oranges(vector<vector<int>>& grid){
    int m = grid.size();
    int n = grid[0].size();
    int ans = 0;
    vector<vector<bool>> vis(m,vector<bool>(n,false));
    queue<pair<pair<int,int>,int>> q;//(i,j , time)
    for(int i=0; i<m ;i++){
        for(int j=0; j<n; j++){
            if(grid[i][j]==2){
                q.push({{i,j},0});
                vis[i][j] = true;
            }
        }
    }
    //Bfs
    while(q.size()>0){
        int i = q.front().first.first;
        int j = q.front().first.second;
        int time = q.front().second;
        q.pop();
        ans = max(ans, time);
        //top
        if(i-1>=0 && !vis[i-1][j] && grid[i-1][j]==1){
            q.push({{i-1,j},time+1});
            vis[i-1][j] = true;
        }
        //bottom
        if(i+1<m && !vis[i+1][j] && grid[i+1][j]==1){
            q.push({{i+1,j},time+1});
            vis[i+1][j] = true;
        }
        //Right
        if(j+1<n && !vis[i][j+1] && grid[i][j+1]==1){
            q.push({{i,j+1},time+1});
            vis[i][j+1] = true;
        }
        //left
        if(j-1>=0 && !vis[i][j-1] && grid[i][j-1]==1){
            q.push({{i,j-1},time+1});
            vis[i][j-1] = true;
        }
    }
    return ans;
}
int main(){
    vector<vector<int>> grid = { {2, 1, 1},
                                 {0, 1, 1},
                                 {1, 0, 1} };
    cout<<"The time is "<<rotting_oranges(grid);                             
    return 0;
}