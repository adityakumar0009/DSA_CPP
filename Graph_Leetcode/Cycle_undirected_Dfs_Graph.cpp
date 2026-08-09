#include<iostream>
#include<list>
#include<queue>
#include<vector>
using namespace std;
class Graph{
    public:
    int V;
    list<int> *l;
    Graph(int V){
        this->V = V;
        l = new list<int> [V];
    }
    void add_Edge(int u, int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }
    bool is_Cycle_undirected(int src,int par,vector<bool> &vis){
        vis[src] = true;
        list<int> neighbours = l[src]; //neighbour
        for(int v : neighbours){
            if(!vis[v]){
                if(is_Cycle_undirected(v,src,vis));{
                    return true;
                }
            }
            else if(v != par){
                return true;
            }
        }
        return false;
    }
    bool isCycle(){
        vector<bool> vis(V,false);
        for(int i=0; i<V; i++){
            if(!vis[i]){
                if(is_Cycle_undirected(i,-1,vis)){
                    return true;
                }
            }
        }
        return false;
    }
};
int main(){
    Graph g(5);
    g.add_Edge(0, 1);
    g.add_Edge(0, 2);
    g.add_Edge(0, 3);
    g.add_Edge(1, 2);
    g.add_Edge(3, 4);
    cout<< g.isCycle() << endl;
    return 0;
}