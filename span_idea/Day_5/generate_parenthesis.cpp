#include<iostream>
#include<vector>
using namespace std;
bool is_valid(string& str){
    int count = 0;
    for(int i=0; i<str.size();i++){
        char ch = str[i];
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
    if(curr.size()==2*n){
        if(is_valid(curr)){
            result.push_back(curr);
        }
        return ;
    }
    curr.push_back('(');
    solve(curr, n);
    curr.pop_back();

    curr.push_back(')');
    solve(curr, n);
    curr.pop_back();
}
vector<string> generate_paremthesis(int n){
    string curr = "";
    solve(curr, n);
    return result;
}
int main(){
    int n = 3;
    vector<string> ans = generate_paremthesis(n);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}