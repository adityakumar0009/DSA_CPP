#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int target;
    cin >> target;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    map<int,int> m;
    for(int i=0; i<n; i++){
        int first = arr[i];
        int second = target - first;
        if(m.find(second)!=m.end()){
            cout<<m[second]<<" "<<i;
            return 0;
        }
        m[first] = i;
    }
}