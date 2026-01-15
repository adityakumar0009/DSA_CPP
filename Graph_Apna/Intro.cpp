#include<iostream>
#include<vector>
#include<list>
using namespace std;
class Graph{
    int v;
    list<int>* l; //dynamic list of integer
    public:
    Graph(int v){
        this->v = v;
        l = new list<int>[v];
        //arr=new int[v]
    }
    void add_edge(int u,int v){
        //store undirected edge
        l[u].push_back(v);
        l[v].push_back(u);
    }
    void print_adj(){
        for(int i=0; i<v; i++){
            cout<<i<<" : ";
            for(int neigh : l[i]){
                cout<<neigh<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    Graph g(5);
    g.add_edge(0,1);
    g.add_edge(1,2);
    g.add_edge(1,3);
    g.add_edge(2,3);
    g.add_edge(2,4);
    g.print_adj();
    return 0;
}