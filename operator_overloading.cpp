#include<iostream>
using namespace std;
class complex{
    private:
    int real;
    int img;
    public:
    complex(){
        real=0;
        img=0;
    }
    complex(int r,int i){
        real=r;
        img=i;
    }
    void print(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }
    complex operator+(complex c){
        complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
};
int main(){
    complex c1(3,4);
    complex c2(5,3);
    complex c3(3,2);
    complex c4=c1+c2+c3;
    c4.print();
}
