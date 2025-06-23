#include<iostream>
#include<vector>
using namespace std;
vector<string> build_array(vector<int> &target, int n){
    int stream = 1;
    int i = 0;
    vector<string> result;
    while(i<target.size() && stream<=n){
        result.push_back("Push");
        if(target[i]==stream){
            i++;
        }
        else{
            result.push_back("Pop");
        }
        stream++;
    }
    return result;
}
int main(){
    vector<int> target = {1, 3};
    int n = 3;
    vector<string> output = build_array(target, n);

    // Print the result
    for (const string &op : output)
    {
        cout << op << " ";
    }
    cout << endl;
    return 0;
}