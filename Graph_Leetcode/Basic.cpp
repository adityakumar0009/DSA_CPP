#include<iostream>
#include<list>
#include<vector>
#include<queue>
using namespace std;
class Graph{
    int V;
    list<int> *l; //integer type ka dynamic array (int *arr)
    public:
    Graph(int V){
        this->V = V;
        //arr = new int[v]
        l = new list<int> [V];
    }
    void addEdge(int u,int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }
    void print_adj(){
        for(int i=0; i<V; i++){
            cout<< i <<" : ";
            for(int neigh : l[i]){
                cout<<neigh<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,4);
    g.addEdge(2,3);
    g.print_adj();
    return 0;
}