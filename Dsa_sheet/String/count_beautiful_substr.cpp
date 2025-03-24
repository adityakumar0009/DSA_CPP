#include<iostream>
using namespace std;
bool is_vowel(char ch){
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}
int count_beautiful_substr(string& s,int k){
    int n = s.length();
    int result = 0;
    for(int i=0;i <n; i++){
        int cons = 0;
        int vowel = 0;
        for(int j =i; j<n; j++){
            if(is_vowel(s[j])){
                vowel++;
            }
            else{
                cons++;
            }

            if(cons==vowel && (cons*vowel)%k == 0){
                result++;
            }
        }
    }
    return result;
}
int main(){
    string s = "baeyh";
    int k = 2;
    cout<<"beautiful count is -> "<<count_beautiful_substr(s,k);
    return 0;
}