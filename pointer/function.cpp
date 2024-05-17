#include<iostream>
using namespace std;
void print(int *p){
    cout<<*p<<endl;
}
void update(int *p){
    *p = *p+1;
}

int getsum(int arr[], int n){//*arr = arr[] dono same hai baat barabar hai
    cout<<endl;
    cout<<"size of -> "<<sizeof(arr)<<endl;
    int sum =0;
    for(int i=0; i<n; i++){
        sum =sum + arr[i];
    }
    return sum;
}
int main(){
    int value = 5;
    int *p = &value;
    //print(p);
    cout<<"value before -> "<<*p<<endl;
    update(p);
    cout<<"after value -> "<<*p<<endl;

    int arr[5] = {1,2,3,4,5};
    cout<<"sum of array - > "<<getsum(arr,5);

    return 0;
}