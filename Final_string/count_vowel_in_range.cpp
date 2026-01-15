#include<iostream>
#include<vector>
using namespace std;
int count_vowel(vector<string>& str,int left,int right){
    int count = 0;
    for(int i=left; i<=right; i++){
        int st = str[i][0];
        int end = str[i][str[i].size()-1];
        if (st == 'a' || st == 'e' || st == 'i' || st == 'o' || st == 'u'){
            if(end == 'a' || end == 'e' || end == 'i' || end == 'o' || end == 'u'){
                count++;
            }
        }
    }
    return count;
}
int main(){
    vector<string> str = {"are", "amy", "u"};
    int left = 0;
    int right = 2;
    cout<<"The number of vowel is "<<count_vowel(str,left,right);
    return 0;
}