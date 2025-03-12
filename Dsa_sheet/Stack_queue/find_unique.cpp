#include<iostream>
#include<unordered_map>
#include<queue>
using namespace std;
int find_unique(string s){
    unordered_map<char,int> m;
    queue<int> q;
    for(int i=0; i<s.size(); i++){
        if(m.find(s[i]) == m.end()){
            q.push(i);
        }
        m[s[i]]++;
        while(m.size()>0 && m[s[q.front()]]>1){
            q.pop();
        }
    }
    return q.empty() ? -1 : q.front();
}
int main(){
    string s = "loveleetcode";
    cout<<"first unique element is at index -> "<<find_unique(s);
    return 0;
}