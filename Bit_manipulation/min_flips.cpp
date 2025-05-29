#include<iostream>
using namespace std;
int min_flips(int a,int b,int c){
    int flips = 0;
    while(a!=0 || b!=0 || c!=0){
        if((c&1)==1){//right most bit
            if(((a&1)==0) && ((b&1)==0)){
                flips++;
            }
        }
        else{
            if((a&1)==1){
                flips++;
            }
            if((b&1)==1){
                flips++;
            }
        }
        a = a>>1;
        b = b>>1;
        c = c>>1;
    }
    return flips;
}
int main(){
    int a = 2;
    int b = 6;
    int c = 5;
    cout<<"minimum number of flips is "<<min_flips(a,b,c);
    return 0;
}