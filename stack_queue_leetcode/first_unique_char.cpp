#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;
int first_unique(string s){
    unordered_map<char,int> m;
    queue<int> q;
    for(int i=0; i<s.size(); i++){
        if(m.find(s[i])==m.end()){
            q.push(i);
        }
        m[s[i]]++;
        while(q.size()>0 && m[s[q.front()]]>1){
            q.pop();
        }
    }
    if(q.empty()){
        return -1;
    }
    else{
        return q.front();
    }
}
int main(){
    string s = "leetcode";
    cout<<"The first unique character is at index "<<first_unique(s);
    return 0;
}