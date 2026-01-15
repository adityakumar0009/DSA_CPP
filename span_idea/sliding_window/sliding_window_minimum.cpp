#include<iostream>
#include<unordered_map>
#include<climits>
using namespace std;
string min_sli_win(string s,string t){
    int n = s.size();
    if(t.length()>n){
        return "";
    }
    unordered_map<char,int> m;
    for(int i=0; i<t.size(); i++){
        char ch = t[i];
        m[ch]++;
    }
    int require_count = t.length();
    int min_win_size = INT_MAX;
    int i = 0;
    int j = 0;
    int start = 0;
    while(j<n){
        char ch = s[j];
        if(m[ch]>0){
            require_count--;
        }
        m[ch]--;
        //shrinking left to right
        while(require_count==0){
            int curr_win_size = j-i+1;
            if(min_win_size>curr_win_size){
                min_win_size = curr_win_size;
                start = i;
            }
            m[s[i]]++;
            if(m[s[i]]>0){
                require_count++;
            }
            i++;
        }
        j++;
    }
    if(min_win_size==INT_MAX){
        return "";
    }
    else{
        return s.substr(start, min_win_size);
    }
}
int main(){
    string s = "ADOBECODEBANC";
    string t = "ABC";
    cout<<"Min_sliding_window "<<min_sli_win(s,t);
    return 0;
}