#include<iostream>
#include<vector>
using namespace std;
int min_operation(vector<string>& logs){
    int op = 0;
    for(int i=0; i<logs.size(); i++){
        if(logs[i]=="../"){
            if(op>0){
                op--;
            }
        }
        else if(logs[i]=="./"){
            continue;
        }
        else{
            op++;
        }
    }
    return op;
}
int main(){
    vector<string> logs = {"d1/", "d2/", "./", "d3/", "../", "d31/"};
    cout << "the minimum number of operations "<<min_operation(logs);
    return 0;
}