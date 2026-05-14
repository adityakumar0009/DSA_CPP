#include<iostream>
#include<unordered_map>
using namespace std;
char odd(char arr[],int n){
    char ans='\0';
    unordered_map<int,int> m;
    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }
    //traverse
    for(int i=0; i<n; i++){
        if(m[arr[i]]%2!=0){
            ans = arr[i];
            break;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    char arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    char ans = odd(arr,n);
    if(ans=='\0'){
        cout<<"All are even"<<endl;
    }
    else{
        cout<<ans;
    }
    return 0;
}