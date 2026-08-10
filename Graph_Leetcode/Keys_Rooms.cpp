#include<iostream>
#include<vector>
using namespace std;
void dfs(int room,vector<vector<int>>& rooms,vector<bool>& vis){
    vis[room] = true;
    for(int v : rooms[room]){
        if(!vis[v]){
            dfs(v,rooms,vis);
        }
    }
}
bool can_room_visit(vector<vector<int>>& rooms){
    int n = rooms.size();
    vector<bool> vis(n,false);
    //Start from 0
    dfs(0, rooms, vis);
    for(int i=0; i<n; i++){
        if(!vis[i]){
            return false;
        }
    }
    return true;
}
int main(){
    vector<vector<int>> rooms = {{1},{2},{3},{}};
    if(can_room_visit(rooms)){
        cout << "visit all the rooms";
    }
    else{
        cout << "cannot visit all the rooms";
    }
    return 0;
}