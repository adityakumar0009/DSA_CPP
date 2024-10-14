#include<iostream>
#include<vector>
#include<stack>
using namespace std;
bool knows(vector<vector<int>>& M, int a, int b) {
    return M[a][b] == 1;
}
int find_celebrity(vector<vector<int>>& M, int n){
    stack<int> s;
    for(int i=0; i<n; i++){
        s.push(i);
    }
    while(s.size()>1){
        int a = s.top();
        s.pop();
        int b = s.top();
        s.pop();
        if(knows(M,a,b)){
            s.push(b);
        }
        else{
            s.push(a);
        }
    }
    int pot_celeb = s.top();
    for(int i=0; i<n; i++){
        if (i != pot_celeb && (knows(M,pot_celeb, i) || !knows(M,i, pot_celeb))) {
            return -1; 
        }
    }
    return pot_celeb;
}
using namespace std;
int main(){
    vector<vector<int>> M = {
        {0,1,0},
        {0,0,0},
        {0,1,0}
    };
    int n = M.size();
    int celebrity = find_celebrity(M,n);
    if(celebrity==-1){
        cout<<"celebrity not found"<<endl;
    }
    else{
        cout<<"celebrity found-> "<<celebrity<<endl;
    }
    return 0;
}