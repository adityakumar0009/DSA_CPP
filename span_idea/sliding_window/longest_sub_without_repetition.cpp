#include<iostream>
#include<unordered_set>
using namespace std;
int longest_substring(string s){
    int left = 0;
    int right = 0;
    int n =s.size();
    unordered_set<int> seen;
    int max_length = 0;
    while(right<n){
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
    cout << "Longest substring without repitition is " << longest_substring(s);
    return 0;
}