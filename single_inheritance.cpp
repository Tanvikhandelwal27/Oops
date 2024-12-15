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
class cat : public animal  // derived class
{ 
public:
    cat()
    {
        cout<<"it's a cat"<<endl;
    }
};
int main()
{
    cat c;
}
