#include<iostream>
#include<vector>
using namespace std;
void rev_str(vector<char>& s){
    int st = 0;
    int end = s.size()-1;
    while(st<end){
        swap(s[st],s[end]);
        st++;
        end--;
    }
}
int main(){
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    rev_str(s);
    string res(s.begin(),s.end());
    cout<<res<<endl;
    return 0;
}