#include <iostream>
#include <string.h>
using namespace std;
class Distance
{
private:
  int meters;

public:
  Distance()
  {
    meters = 0;
  }
  void displaydata()
  {
    cout << "distance in meters:" << meters << endl;
  }
  friend void addValue(Distance &d);
};
void addValue(Distance &d)
{
  d.meters = d.meters + 5;
}
int main()
{
  Distance d1;
  d1.displaydata();
  // friend function call
  addValue(d1); // pass by refernce
  d1.displaydata();
}
