#include<iostream>
#include<unordered_map>
#include<climits>
using namespace std;
string min_wind(string s,string t){
    int n = s.length();
    if(t.length()>n){
        return "";
    }
    unordered_map<char,int> m;
    for(int i=0; i<t.length(); i++){
        char ch = t[i];
        m[ch]++;
    }
    int req_count = t.size();
    int min_window_Size = INT_MAX;
    int i =0 ;
    int j = 0;
    int start = 0;
    while(j<n){
        char ch = s[j];
        if(m[ch]>0){
            req_count--;
        }
        m[ch]--;
        while(req_count==0){
            //shrinking
            int curr_win_size = j-i+1;
            if(min_window_Size>curr_win_size){
                min_window_Size = curr_win_size;
                start = i;
            }
            
        }
    }
}
int main(){
    return 0;
}