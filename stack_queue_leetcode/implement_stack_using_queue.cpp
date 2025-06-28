#include<iostream>
#include<queue>
using namespace std;
class mystack{
    private:
    queue<int> q1;
    queue<int> q2;
public:
void push(int x){
    while(!q1.empty()){
        q2.push(q1.front());
        q1.pop();
    }
    q1.push(x);
    while(!q2.empty()){
        q1.push(q2.front());
        q2.pop();
    }
}

int pop(){
    int ans = q1.front();
    q1.pop();
    return ans;
}

int front(){
    return q1.front();
}

bool empty(){
    return q1.empty();
}
};
int main(){
    mystack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout << "Top element: " << st.front() << endl;     
    cout << "Popped: " << st.pop() << endl;          
    cout << "Top element now: " << st.front() << endl; 

    cout << "Is stack empty? " << (st.empty() ? "Yes" : "No") << endl;
    return 0;
}