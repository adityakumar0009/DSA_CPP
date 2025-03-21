#include<iostream>
using namespace std;
string count_say(int n){
    if(n==1){
        return "1";
    }
    string say = count_say(n-1);
    string result = "";
    for(int i=0; i<say.size(); i++){
        char ch = say[i];
        int count = 1;
        while(i<n && say[i]==say[i+1]){
            count++;
            i++;
        }
        result+=to_string(count)+string(1,ch);
    }
    return result;
}
int main(){
    int n;
    cout<<"count and say is -> "<<count_say(4);
    return 0;
}