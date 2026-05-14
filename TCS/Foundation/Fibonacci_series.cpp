#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int t1 = 0;
    int t2 = 1;
    int new_no = 0;
    for(int i=1; i<=n; ++i){
        if(i==1){
            cout<<t1<<" ";
            continue;
        }
        if(i==2){
            cout<<t2<<" ";
            continue;
        }
        new_no = t1 + t2;
        t1 = t2;
        t2 = new_no;
        cout << new_no << " ";
    }
    return 0;
}