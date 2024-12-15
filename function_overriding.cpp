#include<iostream>
using namespace std;
class A{
    public:
    void show(){
        cout<<"base class A\n";
    }
};
class B:public A{
    public:
    void show(){
        cout<<"derived class B";
    }
};
int main(){
    A a;
    B b;
    
    B obj;//->(A obj);
    a.show();
   obj.show();
    return 0;
}