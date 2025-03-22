#include<iostream>
#include<vector>
using namespace std;
bool check_freq(string &s){
    vector<int> freq(26,0);
    for(int i=0; i<s.length(); i++){
        freq[s[i]-'a']++;
        if(freq[s[i]]-'a'>1){
            return true;
        }
    }
    return false;
}
bool buddy_string(string &s,string &goal){
    if(s.length()!=goal.length()){
        return false;
    }
    if(s==goal){
        return check_freq(s);
    }
    vector<int> index;
    for(int i=0; i<s.length(); i++){
        if(s[i]!=goal[i]){
            index.push_back(i);
        }
    }
    if(index.size()!=2){
        return false;
    }
    else{
        swap(s[index[0]], s[index[1]]);
    }
    return s==goal;
}
int main(){
    string s = "ab";
    string goal = "ba";
    if(buddy_string(s,goal)){
        cout<<"it is a buddy string";
    }
    else{
        cout<<"it is not a buddy string";
    }
    return 0;
}