#include <iostream>
using namespace std;
class weight
{
public:
    int kg;
    weight()
    { // default constructor
        kg = 0;
    }
    weight(int x)
    {
        kg = x;
    }
    void printweight()
    {
        cout << "weight in kg:" << kg << endl;
    }
    void operator++()
    {
        ++kg; // pre increment
    }
    void operator++(int)
    {
        kg++; // post increment
    }
    void operator--()
    {
        --kg; // pre decrement
    }
    void operator--(int)
    {
        kg--; // post decrement
    }
};
int main()
{  
    weight obj;
    obj.printweight();

    ++obj;
    obj.printweight();

    obj++;
    obj.printweight();
    --obj;
    obj.printweight();

    obj--;
    obj.printweight();
}