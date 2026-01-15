#include<iostream>
#include<vector>
using namespace std;
bool is_valid(string& s){
    int count = 0;
    for(int i=0; i<s.size(); i++){
        char ch = s[i];
        if(ch=='('){
            count++;
        }
        else{
            count--;
        }
        if(count<0){
            return false;
        }
    }
    return count==0;
}
vector<string> result;
void solve(string& curr,int n){
    if(curr.length()==2*n){
        if(is_valid(curr)){
            result.push_back(curr);
        }
        return;
    }
    curr.push_back('(');
    solve(curr,n);
    curr.pop_back();

    curr.push_back(')');
    solve(curr,n);
    curr.pop_back();
}
vector<string> generate_parenthesis(int n){
    string curr = "";
    solve(curr,n);
    return result;
}
int main(){
    int n = 3;
    vector<string> result = generate_parenthesis(n);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}