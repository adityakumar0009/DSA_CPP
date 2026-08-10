#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
    int m = maze.size();
    int n = maze[0].size();
    vector<vector<bool>> vis(m,vector<bool>(n,false));
    queue<pair<pair<int,int>,int>> q; //i,j,distance
        
    int sr = entrance[0];
    int sc = entrance[1];

    q.push({{sr,sc},0});
    vis[sr][sc] = true;

    while(q.size()>0){
        int i = q.front().first.first;
        int j = q.front().first.second;
        int distance = q.front().second;
        q.pop();
            
        if((i == 0 || i == m-1 ||
            j == 0 || j == n-1) &&
             !(i == sr && j == sc)) {

            return distance;
        }

        //Top
        if(i-1>=0 && !vis[i-1][j] && maze[i-1][j]=='.'){
            q.push({{i-1,j},distance+1});
            vis[i-1][j] = true;
        }
        //Bottom
        if(i+1<m && !vis[i+1][j] && maze[i+1][j]=='.'){
            q.push({{i+1,j},distance+1});
            vis[i+1][j] = true;
        }
        //Right
        if(j+1<n && !vis[i][j+1] && maze[i][j+1]=='.'){
            q.push({{i,j+1},distance+1});
            vis[i][j+1] = true;
        }
        //Left
        if(j-1>=0 && !vis[i][j-1] && maze[i][j-1]=='.'){
            q.push({{i,j-1},distance+1});
            vis[i][j-1] = true;;
        }
    }
    return -1;
}
int main(){
    vector<vector<char>> maze = {{'+', '+', '.', '+'}, {'.', '.', '.', '+'}, {'+', '+', '+', '.'}};
    vector<int> entrance = {1,2};
    cout<<"Nearest exit enterance is "<<nearestExit(maze,entrance);
    return 0;
}