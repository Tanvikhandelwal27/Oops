#include<iostream>
using namespace std;
int main(){
    int a,b,result;
    cout<<"enter the value of a and b :"<<endl;
    cin>>a>>b;
    try{
        if(b==0){
            throw b;
        }
         result=a/b;
    }
    catch(int ex){
        cout<<"Error:division by zero is not allowed "<< ex<<endl;
    }
   cout<<" division is:"<< result <<endl;
   return 0;
}