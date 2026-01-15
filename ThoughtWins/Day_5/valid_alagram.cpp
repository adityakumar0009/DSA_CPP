#include<iostream>
#include<queue>
using namespace std;
bool is_anagram(string s,string t){
    if(s.size()!=t.size()){
        return false;
    }
    priority_queue<char,vector<char>,greater<char>> pq1,pq2;
    for(char ch : s){
        pq1.push(ch);
    }
    for(char ch : t){
        pq2.push(ch);
    }

    while(pq1.size()>0 && pq2.size()>0){
        if(pq1.top()!=pq2.top()){
            return false;
        }
        pq1.pop();
        pq2.pop();
    }
    return true;
}
int main(){
    string s = "listen", t = "silent";
    if(is_anagram(s, t))
        cout << s << " and " << t << " are anagrams.\n";
    else
        cout << s << " and " << t << " are NOT anagrams.\n";
    return 0;
}