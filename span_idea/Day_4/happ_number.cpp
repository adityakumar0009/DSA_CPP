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
int get_next(int n);
bool happy(int n){
    int slow = n;
    int fast = get_next(n);
    while(fast!=1 && slow!=fast){
        slow = get_next(slow);
        fast = get_next(get_next(fast));
    }
    return fast == 1;
}
int get_next(int n){
    int sum = 0;
    while(n>0){
        int digit = n%10;
        sum+=digit*digit;
        n = n/10;
    }
    return sum;
}
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (happy(num))
    {
        cout << num << " is a Happy Number!" << endl;
    }
    else
    {
        cout << num << " is not a Happy Number." << endl;
    }
    return 0;
}