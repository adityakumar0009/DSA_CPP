#include<iostream>
#include<vector>
using namespace std;
vector<int> find_index(vector<string>& words,char x){
    vector<int> result;
    for(int i=0; i<words.size(); i++){
        if(words[i].find(x)!= string::npos){
            result.push_back(i);
         }
    }
    return result;
}
int main(){
    vector<string> words = {"leet", "code"};
    char x = 'e';
    vector<int> result = find_index(words,x);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}