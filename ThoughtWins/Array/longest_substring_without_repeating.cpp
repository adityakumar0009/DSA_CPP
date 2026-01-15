#include<iostream>
#include<unordered_set>
using namespace std;
int len_of_longest_substring(string s){
    unordered_set<int> seen;
    int n = s.size();
    int left = 0;
    int right = 0;
    int max_length = 0;
    while(right<s.size()){
        if(seen.find(s[right])==seen.end()){
            seen.insert(s[right]);
            max_length = max(max_length,right-left+1);
            right++;
        }
        else{
            seen.erase(s[left]);
            left++;
        }
    }
    return max_length;
}
int main(){
    string s = "abcabcbb";
    cout<<"The length of longest substring is "<<len_of_longest_substring(s);
    return 0;
}