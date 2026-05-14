#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    unordered_map<int, int> m;
    for(int i=0; i<n; i++){
        int second = target-arr[i];
        if(m.find(second)!=m.end()){
            cout << "Pair Found";
            return 0;
        }
        m[arr[i]] = i;
    }
    cout<<"Pair not found"<<endl;

    return 0;
}