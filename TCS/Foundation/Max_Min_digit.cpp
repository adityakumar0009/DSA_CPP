#include<iostream>
#include<climits>
using namespace std;
pair<int,int> Max_digit(int n){
    int max_digit = INT_MIN;
    int min_digit = INT_MAX;
    while(n>0){
        int digit = n%10;
        max_digit = max(max_digit,digit);
        min_digit = min(min_digit,digit);
        n = n/10;
    }
    return {max_digit, min_digit};
}
int main(){
    int n = 9813;
    pair<int,int> result = Max_digit(n);
    cout<<"Maximum digit of a number is "<<result.first<<endl;
    cout<<"Minimum digit of a number is "<<result.second<<endl;
    return 0;
}