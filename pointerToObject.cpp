#include <iostream>
using namespace std;
class complexNumber
{
private:
    int real;
    int imag;

public:
    // default constructor
    complexNumber()
    {
        real = 0;
        imag = 0;
    }
    complexNumber(int r, int i)
    {
        real = r;
        imag = i;
    }
    void displaydata()
    {
        cout << "complpex number is: " << real << " + " << imag << "i" << endl;
    }
    int getrealpart(){
        return real;
    }
    int getimagpart(){
        return imag;
    }
};
complexNumber Add(complexNumber c1,complexNumber c2){
    int r,i;
    // c4.real=c1.real+c2.real+c3.real;
    // c4.imag=c1.imag+c2.imag+c3.imag;
    r=c1.getrealpart()+c2.getrealpart();
    i=c1.getimagpart()+c2.getimagpart();
    complexNumber temp(r,i);
    return temp;

}
int main()
{
    complexNumber c1(3, 4);
    complexNumber c2(5, 1);
    complexNumber c3;
    c1.displaydata();
    c2.displaydata();
cout<<"addition of two ";
    c3= Add(c1,c2);
    c3.displaydata();
    cout<<"---------pointer to object---------"<<endl;
    complexNumber*ptr1;
    ptr1=&c3;
    ptr1->displaydata();
    cout<<"----adresses stored in pointer----"<<endl;
    cout<<"address of c3 is : "<<ptr1<<endl;
     cout<<"------------------------------------"<<endl;
}
