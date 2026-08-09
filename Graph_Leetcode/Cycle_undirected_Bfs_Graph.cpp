#include<iostream>
#include<queue>
#include<vector>
#include<list>
using namespace std;
class Graph{
    public:
    int V;
    list<int> *l;
    Graph(int V){
        this->V = V;
        l = new list<int> [V];
    }
    void add_Edge(int u,int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }
    bool is_cycle_Directed(int src,vector<bool>& vis){
        queue<pair<int,int>> q;
        q.push({src,-1});
        vis[src] = true;
        while(q.size()>0){
            int u = q.front().first;
            int parU = q.front().second;
            q.pop();
            list<int> neighbour = l[u];
            for(int v : neighbour){
                if(!vis[v]){
                    q.push({v,u});
                    vis[v] = true;
                }
                else if(v != parU){
                    return true;
                }
            }
        }
        return false;
    }
    bool is_cycle(){
        vector<bool> vis(V,false);
        for(int i=0; i<V; i++){
            if(!vis[i]){
                if(is_cycle_Directed(i,vis)){
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
    cout <<g.is_cycle()<<endl;
    return 0;
}