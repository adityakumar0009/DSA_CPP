#include<iostream>
using namespace std;
class Grandfather{
    public:
    public:
    void religion(){
        cout<<"he belongs to hindu relgion"<<endl;
    }
};
class Father : public Grandfather{
    public:
    void caste(){
        cout<<"he belongs to kayastha"<<endl;
    }
};
class Son:public Father{
    public:
    void gotra(){
        cout<<"he belongs to parasar gotra"<<endl;
    }
};
int main(){
    Son s;
    s.religion();
    s.caste();
    s.gotra();
}