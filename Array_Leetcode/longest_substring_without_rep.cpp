#include<iostream>
#include<unordered_set>
using namespace std;
int longest_substring(string& s){
    int left = 0;
    int right = 0;
    int max_length = 0;
    unordered_set<int> seen;
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
    cout << " the length of the longest substring without duplicate characters."<<longest_substring(s);
    return 0;
}