#include<iostream>
using namespace std;
class A{
    public:
    
     void show(){
        
         cout<<"hello from A";
     }
};
class B:public virtual A{
    public:
    void show(){
        cout<<"hello from B";
    }
};
class C:public virtual A{
    public:
    void show(){
        cout<<"hello from C";
    }
};
class D :public B, public  C
{
    public:
    void show(){
        cout<<"hello from D";
    }
};
int main(){
    D obj;
   obj.show();
}