//Topology Sorting - Directed Acyclic Graph, verted U comes before V in the order. 
//Topology sorting questions is basically used to solve dependancy based questions.Software dependency,task scheduling
#include<iostream>
#include<list>
#include<queue>
#include<vector>
#include<stack>
using namespace std;
class Graph{
    int V;
    list<int> *l;
    public:
    Graph(int V){
        this -> V = V;
        l = new list<int>[V];
    }
    void add_Edge(int u,int v){
        l[u].push_back(v);//only directed Edge
    }
    void dfs(int curr,vector<bool>& vis,stack<int>& s){
        vis[curr] = true;
        for(int v : l[curr]){
            if(!vis[v]){
                dfs(v,vis,s);
            }
        }
        s.push(curr);
    }
    void Topological_sort(){
        vector<bool> vis(V,false);
        stack<int> s;
        for(int i=0; i<V; i++){
            if(!vis[i]){
                dfs(i,vis,s);
            }
        }
        while(s.size()>0){
            cout<<s.top()<<" ";
            s.pop();
        }
        cout<<endl;
    }
};
int main(){
    Graph g(6);
    g.add_Edge(3,1);
    g.add_Edge(2,3);
    g.add_Edge(4,0);
    g.add_Edge(4,1);
    g.add_Edge(5,0);
    g.add_Edge(5,3);
    g.Topological_sort();
    return 0;
}