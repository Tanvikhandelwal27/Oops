#include<iostream>
using namespace std;
class demo{
    public:
    static int abc;
    demo(){
        abc++;
    }
};
int demo::abc=10;
int main(){
int a;
cout<<"value of abc:"<<demo::abc<<endl;
demo obj;
cout<<"value of abc after one object:"<<demo::abc<<endl;
return 0;
}