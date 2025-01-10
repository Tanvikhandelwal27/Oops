#include <iostream>
using namespace std;
template <typename T>
T add(T x, T y)
{
    return (x + y);
}
int main()
{
    cout << "addition of two integers is:" << add<int>(3, 4) << endl;
    cout << "addition of two double values is:" << add<double>(3.5912, 4.5151) << endl;
    cout << "addition of two float values is:" << add<float>(3.7, 4.3) << endl;
}