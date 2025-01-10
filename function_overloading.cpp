#include <iostream>
using namespace std;
int add(int x, int y)
{
    return (x + y);
}
float add(float x, float y)
{
    return (x + y);
}
double add(double x, double y)
{
    return (x + y);
}

int main()
{
    char b, c;
    string tanvi, khandelwal;
    cout << "addition of integers 5 and 7:" << add(5, 7) << endl;
    cout << "addition of 15.5431 and 1.1111:" << add(15.5431, 1.1111) << endl;
    cout << "addition of 3.4 and 5.1 :" << add(3.4, 5.1) << endl;
}
