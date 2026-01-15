#include<iostream>
#include<vector>
using namespace std;
bool all_zeros(vector<int>& counter){
    for(int i=0; i<counter.size(); i++){
        if(counter[i]!=0){
            return false;
        }
    }
    return true;
}
vector<int> find_anagram(string& text,string& pat){
    vector<int> counter(26,0);
    for(int i=0; i<pat.size(); i++){
        char ch = pat[i];
        int index = ch-'a';
        counter[index]++;
    }
    vector<int> result;
    int n = text.size();
    int i = 0;
    int j = 0;
    int k = pat.size();
    while(j<n){
        char ch = text[j];
        int index = ch-'a';
        counter[index]--;
        if(j-i+1==k){
            if(all_zeros(counter)){
                result.push_back(i);
            }
            counter[text[i] - 'a']++;
            i++;
        }
        j++;
    }
    return result;
}
int main(){
    string text = "cbaebabacd";
    string pat = "abc";
    vector<int> ans =find_anagram(text,pat);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}