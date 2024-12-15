#include<iostream>
using namespace std;
class number{
    private:
    const int x;
    public:
    number():x(6){}//initialise of const data
    void display(){
        cout<<"x="<<x<<endl;
    }

};
int main(){
    number num;
    num.display();

}