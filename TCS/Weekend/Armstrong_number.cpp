/*#include<iostream>
#include<climits>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int original = n;
    int sum = 0;
    while(n>0){
        int digit = n%10;
        sum+=pow(digit,3);
        n = n/10;
    }
    if(sum==original){
        cout<<"armstrong number"<<endl;
    }
    else{
        cout<<"Not a armstrong number"<<endl;
    }
    return 0;
}*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n;
    cin>>n;

    int original = n;
    int sum = 0;

    while(n>0){

        int digit = n%10;

        sum += pow(digit,3);

        n/=10;
    }

    if(sum==original)
        cout<<"Armstrong";
    else
        cout<<"Not Armstrong";
}