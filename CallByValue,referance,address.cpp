 #include<iostream>
 using namespace std;
 void passByvalue(int x,int y){
    int z=x;
    x=y;
    y=z;

 }
 void passByreferance(int &x,int &y){
    int z=x;
    x=y;
    y=z;

 }
 void passByAddress(int *x,int *y){
    int z=*x;
    *x=*y;
   * y=z;

 }
 int main(){
    int a =2, b=4;
    cout<<"before swapping"<<endl<<a<<endl<<b<<endl<<endl;
    //call function
    passByAddress(&a,&b);
        cout<<"after swapping"<<endl<<"a:"<<a<<endl<<"b:"<<b<<endl<<endl;

 }