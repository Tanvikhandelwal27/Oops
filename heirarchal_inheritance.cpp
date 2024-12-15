#include<iostream>
using namespace std;
class shape//base class 
{
    public:
    shape(){
        cout<<"shape is created"<<endl;
    }
};
class rectangle:public virtual shape//derived class A
{
    public:
     rectangle(){
        cout<<" rectangle "<<endl;
    }
};
class circle:public virtual shape//derive class B
{
    public:
    circle(){
        cout<<" circle "<<endl;
    }
};
class area: public rectangle , public  circle//derive of A nd B
{
    public:
    int l=12,b=4;
    int rect(){
        
        int rect_area= l*b;
        cout<<"area of rectangle is:"<<rect_area<<endl;
    }
    int cir(){
        int r=5;
        float cir_area = 3.14*r*r;
        cout<<"area of circle:"<<cir_area<<endl;
    }
};
class para: public rectangle , public circle//derive of A nd B
{
    public:
    int l=12, b=4;
    int rect(){
        int para_rect=2*(l+b);
        cout<<"parameter of rectangle:"<<para_rect<<endl;
    }
    int cir(){
        int r=5;
        float para_cir=2*3.14*r;  
        cout<<"parameter of circle:"<<para_cir<<endl;
  }

};
int main(){
    
    area a;
    a.rect();
    a.cir();
    para p;
    p.rect();
    p.cir();
    return 0;
}
