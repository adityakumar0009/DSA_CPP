#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int char_replacement(string& s,int k){
    vector<int> freq(26,0);
    int left = 0;
    int right = 0;
    int max_count = 0;
    int result = 0;
    for(int right=0; right<s.size(); right++){
        char ch = s[right];
        int index = ch-'A';
        freq[index]++;
        max_count = max(max_count,right-left+1);
        while((right-left+1)-max_count>k){
            freq[s[left]-'A']--;
            left++;
        }
        result = max(result,right-left+1);
    }
    return result;
}
int main(){
    string s = "ABAB";
    int k = 2;
    cout << "The length of the longest substring containing the same letter "<<char_replacement(s,k);
    return 0;
}