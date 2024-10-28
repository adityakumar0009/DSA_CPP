#include<iostream>
#include<stack>
using namespace std;
class queue{
    int *arr;
    int rear;
    int front;
    int size;
    public:
    queue(){
        size = 10001;
        arr = new int[size];
        front = 0;
        rear = 0;
    }
    void push(int x){
        if(rear==size){
            cout<<"queue is full"<<endl;
        }
        else{
            arr[rear] = x;
            rear++;
        }
    }
    int pop(){
        if(front==rear){
            return -1;
        }
        else{
            // arr[front] = -1;
            int ans = arr[front];
            front++;
            if(front==rear){
                front=0;
                rear=0;
            }
            return ans;
        }
    }
    int peek(){
        if(front==rear){
            return -1;
        }
        else{
            return arr[front];
        }
    }
    bool empty(){
        if(front==rear){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    queue q;
    q.push(10);
    q.push(20);
    cout << q.peek() << endl; // Should print 10
    cout << q.pop() << endl;  // Should print 10
    cout << q.empty() << endl; // Should print 0 (false)
    cout << q.pop() << endl;  // Should print 20
    cout << q.empty() << endl; // Should print 1 (true)

    return 0;
}