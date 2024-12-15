#include<iostream>
using namespace std;
class shape{
    public:
    virtual void draw()=0;

};
class rectangle:public shape{
    public:
    void draw(){
        cout<<"drawing a rectangle\n";
    }
};
class circle:public shape{
    public:
    void draw(){
         cout<<"draw a circle";
    }
};
int main(){
    rectangle rec;
    circle cir;
    rec.draw();
    cir.draw();
}
