#include<iostream>
#include<vector>
using namespace std;
bool is_vowel(char ch){
    return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
}
vector<int> vowel_string(vector<string>& words,vector<vector<int>>& queries){
    int Q = queries.size();
    int N = words.size();
    vector<int> result(Q);
    vector<int> cumSum(N);
    int sum = 0;
    for(int i=0; i<N; i++){
        if(is_vowel(words[i][0]) && is_vowel(words[i].back())){
            sum++;
        }
        cumSum[i] = sum;
    }
    for(int i=0; i<Q; i++){
        int l = queries[i][0];
        int r = queries[i][1];
        result[i] = cumSum[r] - (l > 0 ? cumSum[l - 1] : 0);
    }
    return result;
}
int main(){
    vector<string> words = {"aba", "bcb", "ece", "aa", "e"};
    vector<vector<int>> queries = {{0,2},{1,4},{1,1}};
    vector<int> result = vowel_string(words,queries);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}