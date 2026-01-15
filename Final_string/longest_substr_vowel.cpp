#include<iostream>
using namespace std;
int longest_substring(string word){
    int max_length = 0;
    int vowel = 0;
    int start = 0;
    for(int i=1; i<word.size(); i++){
        if(word[i]<word[i-1]){
            start = i;
            vowel = 1;
        }
        else if(word[i]<word[i+1]){
            vowel++;
        }
        if(vowel==5){
            max_length = max(max_length,i-start+1);
        }
    }
    return max_length;
}
int main(){
    string word = "aeiaaioaaaaeiiiiouuuooaauuaeiu";
    cout<<"The longest substring length is "<<longest_substring(word);
    return 0;
}