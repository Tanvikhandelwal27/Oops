#include<iostream>
using namespace std;
template <typename T, typename U>
class height{
    private:
    T cm;
     U inch;
    public:
    void setdata(T x ,U y){
        cm=x;
        inch=y;
    }
    T getCmdata(){
return cm;
    }
    U getInchdata(){
        return inch;
    }
};
int main(){
    height<int , double>h1;
    h1.setdata(12, 13.412);
    cout<<"height in kg is: "<<h1.getCmdata()<<endl;
     cout<<"height in inch is: "<<h1.getInchdata()<<endl;
     height<double, int>h2;
    h2.setdata(12.5,14);
    cout<<"height in cm is: "<<h2.getCmdata()<<endl;
    cout<<"height in inch is: "<<h2.getInchdata()<<endl;

}

