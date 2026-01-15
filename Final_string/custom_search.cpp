#include<iostream>
using namespace std;
string custom_sort(string order,string s){
    int count[26] = {0};
    for(int i=0; i<s.size(); i++){
        char ch = s[i];
        int index = ch-'a';
        count[index]++;
    }
    string result = "";
    for(int i=0; i<order.size(); i++){
        char ch = order[i];
        while(count[ch-'a']>0){
            result.push_back(ch);
            count[ch-'a']--;
        }
    }
    for(int i=0; i<s.size(); i++){
        char ch = s[i];
        if(count[ch-'a']>0){
            result.push_back(ch);
        }
    }
    return result;
}
int main(){
    string order = "cba";
    string s = "abcd";
    cout<<"The custom sort is "<<custom_sort(order,s);
    return 0;
}