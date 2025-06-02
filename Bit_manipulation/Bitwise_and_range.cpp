#include<iostream>
#include<vector>
using namespace std;
int bitwise_and(int left, int right){
    int shiftcount = 0;
    while(left!=right){
        left = left>>1;
        right = right>>1;
        shiftcount++;
    }
    return left<<shiftcount;
}
int main(){
    int left = 5;
    int right = 7;
    cout<<"bitwise and of number range is "<<bitwise_and(left,right);
    return 0;
}