//Already visited and recursive path both
#include<iostream>
#include<vector>
#include<queue>
#include<list>
using namespace std;
class Graph{
    int V;
    list<int> *l;
    public:
    Graph(int V){
        this -> V = V;
        l = new list<int> [V];
    }
    void add_Edge(int u,int v){
        l[u].push_back(v);//Directed Graph
    }
    bool is_cycle(int curr,vector<bool>& vis,vector<bool>& rec_path){
        vis[curr] = true;
        rec_path[curr] = true;
        for(int v : l[curr]){
            if(!vis[v]){
                if(is_cycle(v, vis, rec_path)){
                    return true;
                }
            }
            else if(rec_path[v]){
                return true;
            }
        }
        rec_path[curr] = false;
        return false;
    }
    bool cycle(){
        vector<bool> vis(V,false);
        vector<bool> rec_path(V,false);
        for(int i=0; i<V; i++){
            if(is_cycle(i,vis,rec_path)){
                return true;
            }
        }
        return false;
    }
};
int main(){
    Graph g(4);
    g.add_Edge(1,0);
    g.add_Edge(0,2);
    g.add_Edge(2,3);
    g.add_Edge(3,0);
    cout<<g.cycle() <<endl;
    return 0;
}