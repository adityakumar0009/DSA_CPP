#include<iostream>
using namespace std;
bool can_construct(string ramson,string mazagine){
    int count[26] = {0};
    for(int i=0; i<mazagine.size(); i++){
        count[mazagine[i]-'a']++;
    }
    for(int j=0; j<ramson.size(); j++){
        if(count[ramson[j]-'a']==0){
            return false;
        }
        count[ramson[j] - 'a']--;
    }
    return true;
}
int main(){
    string ramson = "aa";
    string mazagine = "aab";
    if(can_construct(ramson,mazagine)){
        cout<<"it is a ramson note"<<endl;
    }
    else{
        cout<<"it is not a ramson note"<<endl;
    }
    return 0;
}