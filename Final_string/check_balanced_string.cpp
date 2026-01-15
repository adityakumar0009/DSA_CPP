#include<iostream>
using namespace std;
bool is_balanced(string num){
    int odd_sum = 0;
    int even_Sum = 0;
    for(int i=0; i<num.size(); i++){
        if(num[i]%2==0){
            even_Sum+=num[i];
        }
        else{
            odd_sum+=num[i];
        }
    }
    if(even_Sum=odd_sum){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    string num = "24123";
    if(is_balanced(num)){
        cout<<"It is a balanced number"<<endl;
    }
    else{
        cout<<"It is not a balanced number"<<endl;
    }
    return 0;
}