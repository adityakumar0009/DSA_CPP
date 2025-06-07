#include<iostream>
using namespace std;
bool can_construct(string& ransomNote,string& magazine){
    int count[26] = {0};
    for(int i=0; i<magazine.size(); i++){
        count[magazine[i]-'a']++;
    }
    for(int j=0; j<ransomNote.size(); j++){
        if(count[ransomNote[j]-'a']==0){
            return false;
        }
        count[ransomNote[j]-'a']--;
    }
    return true;
}
int main(){
    string ransomNote = "aa";
    string magazine = "aab";
    if(can_construct(ransomNote,magazine)){
        cout << "ransomNote can be constructed by using the letters from magazine"<<endl;
    }
    else{
        cout << "ransomNote cannot be constructed by using the letters from magazine"<<endl;
    }
    return 0;
}