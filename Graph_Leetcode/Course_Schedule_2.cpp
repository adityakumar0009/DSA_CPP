#include<iostream>
#include<vector>
#include<stack>
using namespace std;
bool is_cycle_Dfs(int src,vector<bool>& vis,vector<bool>& rec_path,vector<vector<int>> & edges){
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

void topOrder(int src,vector<bool>& vis,stack<int>& s, vector<vector<int>>& edges){
    vis[src] = true;
    for(int i=0; i<edges.size(); i++){
        int v = edges[i][0];
        int u = edges[i][1];
        if(src==u){
            if(!vis[v]){
                topOrder(v, vis, s, edges);
            }
        }
    }
    s.push(src);
}

vector<int> find_order(int n,vector<vector<int>>& edges){
    vector<bool> vis(n,false);
    vector<bool> rec_path(n,false);
    vector<int> ans;
    for(int i=0; i<n; i++){
        if(!vis[i]){
            if(is_cycle_Dfs(i,vis,rec_path,edges)){
                return ans; // return empty vector if cycle existed
            }
        }
    }
    // Topological sorted order
    stack<int> s;
    vis.assign(n,false);
    for(int i=0; i<n; i++){
        if(!vis[i]){
            topOrder(i,vis,s,edges);
        }
    }
    while(s.size()>0){
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
}
int main(){
    vector<vector<int>> edges = { {1, 0}, {2,0}, {3,1}, {3,2} };
    int n = 4;
    vector<int> result = find_order(n,edges);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}