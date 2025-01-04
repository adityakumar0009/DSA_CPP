#include<iostream>
using namespace std;
class solution{
    public:
    bool is_happy(int n){
        int slow = n;
        int fast = get_next(n);
        while(fast!=1 && slow!=fast){
            slow = get_next(slow);
            fast = get_next(get_next(fast));
        }
        return fast == 1;
    }
    private:
    int get_next(int n){
        int sum =0;
        while(n>0){
            int digit = n%10;
            sum+=digit*digit;
            n=n/10;
        }
        return sum;
    }
};
int main(){
    solution sol;
    cout<<sol.is_happy(19)<<endl;
    cout<<sol.is_happy(2)<<endl;
    return 0;
}