#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    d.pop_front();
    for(int i:d){
        cout<<i<<" ";
    }
}
// deque - > doubly ended queue
// Dequeue - > pop

// push_back and push_front
// pop_back and pop_front
// emplace_back and empplace_front

// random access possible because of dynamic array