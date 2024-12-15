#include<iostream>
using namespace std;
class demo{
    public:
    static int abc;
};
int demo::abc=10;
int main(){
int a;
cout<<"value of abc:"<<demo::abc<<endl;
}