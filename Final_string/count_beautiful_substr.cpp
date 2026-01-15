#include<iostream>
using namespace std;
bool is_vowel(char ch){
    return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
}
int beautiful_string(string s,int k){
    int result = 0;
    for(int i=0; i<s.size(); i++){
        int vowel = 0;
        int consonant = 0;
        for(int j=i; j<s.size(); j++){
            if(is_vowel(s[j])){
                vowel = vowel+1;
            }
            else{
                consonant = consonant+1;
            }
            if (vowel == consonant && (vowel * consonant) % k == 0)
            {
                result++;
            }
        }
    }
    return result;
}
int main(){
    string s = "baeyh";
    int  k = 2;
    cout<<"The beautiful string count is "<<beautiful_string(s,k);
    return 0;
}