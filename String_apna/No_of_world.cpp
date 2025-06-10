#include<iostream>
#include<vector>
using namespace std;
int vowel_string(vector<string>& words, int left,int right){
    int count = 0;
    for(int i=left; i<=right; i++){
        int s = words[i][0];
        int e = words[i][words.size()-1];
        if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u'){
            if(e=='a'||e=='e'||e=='i'||e=='o'||s=='u'){
                count++;
            }
        }
    }
    return count;
}
int main(){
    vector<string> words ={ "are","amy","u"};
    int left = 0;
    int right = 2;
    cout << "the Number of Vowel Strings in Range "<<vowel_string(words,left,right);
    return 0;
}