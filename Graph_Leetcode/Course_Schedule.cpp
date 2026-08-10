#include<iostream>
#include<list>
#include<vector>
using namespace std;
bool is_cycle_Dfs(int src,vector<bool>& vis,vector<bool>& rec_path, vector<vector<int>>& edges){
    vis[src] = true;
    rec_path[src] = true;
    for(int i=0; i<edges.size(); i++){
        int v = edges[i][0];
        int u = edges[i][1];
        if(src==u){
            if(!vis[v]){
                if(is_cycle_Dfs(v,vis,rec_path,edges)){
                    return true;
                }
            }
            else if(rec_path[v]){
                return true;
            }
        }
    }
    rec_path[src] = false;
    return false;
}
bool can_finish(int n, vector<vector<int>>& edges){
    vector<bool> vis(n,false);
    vector<bool> rec_path(n,false);
    for(int i=0; i<n; i++){
        if(!vis[i]){
            if(is_cycle_Dfs(i,vis,rec_path,edges)){
                return false;
            }
        }
    }
    return true;
}
int main(){
    int n = 2;
    vector<vector<int>> edges = {{1,0},{0,1}};
    if(can_finish(n,edges)){
        cout<<"Can finish all courses"<<endl;
    }
    else{
        cout<<"Cannot finish all courses"<<endl;
    }
    return 0;
}