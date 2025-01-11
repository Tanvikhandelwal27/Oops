#include <iostream>
using namespace std;
int main()
{
    int size;
    int *ptr;
    cout << "enter the size of array: " << endl;
    cin >> size;
    ptr = new int[size];
    cout << "ENTER THE ELEMENTS OF ARRAY" << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> ptr[i];
    }
    cout << "values in array are:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << ptr[i]<<endl;
    }
}
