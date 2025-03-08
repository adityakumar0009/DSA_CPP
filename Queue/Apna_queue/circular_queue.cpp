#include<iostream>
using namespace std;
class circularqueue{
    int *arr;
    int currsize,cap;
    int f,r;
    public:
    circularqueue(int size){
        cap= size;
        arr = new int[cap];
        currsize = 0;
        f=0;
        r=-1;
    }
    void push(int data){
        if(currsize==cap){
            cout<<"CQ is full\n";
            return;
        }
        r = (r+1)%cap;
        arr[r] = data;
        currsize++;
    }
    void pop(){
        if(empty()){
            cout << "CQ is Empty\n";
            return;
        }
        f = (f+1)%cap;
        currsize--;
    }
    int front(){
        if (empty())
        {
            cout << "CQ is Empty\n";
            return -1;
        }
        return arr[f];
    }
    bool empty(){
        return currsize == 0;
    }
};
int main(){
    circularqueue cq(3);
    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.push(4);
    return 0;
}