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
vector<int> find_anagram(string txt,string pat){
    int n = txt.size();
    vector<int> counter(26,0);
    for(int i=0; i<pat.size(); i++){
        char ch = pat[i];
        int index = ch-'a';
        counter[index]++;
    }
    int i =0;
    int j = 0;
    int k = pat.size();
    vector<int> result;
    while(j<n){
        counter[txt[j]-'a']--;
        if(j-i+1==k){
            if(all_zeros(counter)){
                result.push_back(i);
            }
            counter[txt[i]-'a']++;
            i++;
        }
        j++;
    }
    return result;
}
int main(){
    string txt = "cbaebabacd";
    string pat = "abc";
    vector<int> result = find_anagram(txt,pat);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}