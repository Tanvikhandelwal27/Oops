#include <iostream>
using namespace std;
class animal  // base class
{ 
public:
    animal()
    {
         cout<<"it's a animal"<<endl;
    }
};
class cat : public animal  // derived class and base for class meow
{ 
public:
    cat()
    {
        cout<<"it's a cat"<<endl;
    }
};
class meow:public cat// derive class for base class cat
{
    public:
    meow(){
        cout<<"it can meow"<<endl;
    }
};
int main()
{
    meow m;
}
