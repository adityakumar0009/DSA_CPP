#include<iostream>
using namespace std;
class Circular_queue{
    int* arr;
    int curr_size;
    int capacity;
    int f;
    int r;
    public:
    Circular_queue(int size){
        capacity = size;
        curr_size = 0;
        arr = new int[capacity];
        f= 0;
        r = -1;
    }
    void push(int data){
        if(curr_size==capacity){
            cout<<"CQueue is full"<<endl;
            return;
        }
        r = (r+1)%capacity;
        arr[r] = data;
        curr_size++;
    }
    void pop(){
        if(empty()){
            cout<<"CQ is empty"<<endl;
            return;
        }
        f = (f+1)%capacity;
        curr_size--;
    }
    int front(){
        return arr[f];
    }
    bool empty(){
        return curr_size==0;
    }
    void print(){
        for(int i=0; i<capacity; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Circular_queue cq(3);
    cq.push(2);
    cq.push(3);
    cq.push(4);
    cq.pop();
    cq.push(5);
    cq.print();
    return 0;
}