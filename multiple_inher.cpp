#include <iostream>
using namespace std;
class loyal // base class A
{
public:
    loyal()
    {
        cout << "he is loyal 💕" << endl;
    }
};
class caring // base class B
{
public:
    caring()
    {
        cout << "he is caring 😍" << endl;
    }
};
class best // base class c
{
public:
    best()
    {
        cout << "he is best ❤️👌" << endl;
    }
};
class BF : public loyal, public caring, public best // derived class
{
public:
    BF()
    {
        cout << "he is mhh BF 😁😉💖💖💖" << endl;
    }
};
int main()
{
    BF b1;
    // return 0;
}