#include<iostream>
using namespace std;
class shape{
    public:
    virtual void getarea()=0;

};
class circle:public shape{
    public:
    void getarea(){
        cout<<"enter the radius of circle :"<<endl;
        int r;
        cin>>r;
       int area=3.14*r*r;
        cout<<"area of circle is : "<<area<<endl;
    }
};
class rectangle:public shape{
    public:
     void getarea(){
        cout<<"enter the length and breadth of circle :"<<endl;
        int l , b;
        cin>>l;
        cin>>b;
         int aRec=l*b;
        cout<<"area of rectangle :"<<aRec<<endl;
    }
};
 int main(){
circle c;
c.getarea();
rectangle r;
r.getarea();
}