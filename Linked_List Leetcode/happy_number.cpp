#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
int getNext(int n);
bool isHappy(int n){
    int slow = n;
    int fast = getNext(n);
    while(fast!=1 && slow!=fast){
        slow = getNext(slow);
        fast = getNext(getNext(fast));
    }
    return fast==1;
}
int getNext(int n){
    int sum =0;
    while(n>0){
        int digit = n%10;
        sum+=digit*digit;
        n=n/10;
    }
    return sum;
}
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isHappy(num))
    {
        cout << num << " is a Happy Number!" << endl;
    }
    else
    {
        cout << num << " is not a Happy Number." << endl;
    }
    return 0;
}