#include<iostream>
using namespace std;
int dec_bin(int decNum){
    int ans = 0;
    int power = 1;
    while(decNum>0){
        int rem = decNum%2;
        decNum = decNum/2;
        ans+=(rem*power);
        power*=10;
    }
    return ans;
}
int main(){
    int decNum = 4;
    for(int i=0; i<=10; i++){
        cout << "The decimal to binary conversion of this number is " << dec_bin(i)<<endl;
    }
    return 0;
}