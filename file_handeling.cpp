#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char arr[100];
    cout<<"enter your name and age : "<<endl;
    cin.getline(arr,100);
    ofstream myfile("tanvi.txt",ios::app  | ios::out);
    myfile <<arr;
    myfile.close();
    cout<<"<----File write operation successfully performed---->"<<endl<< endl;
    cout<<"....Reading from file operation started...."<<endl;
    ifstream obj("tanvi.txt");
    char arr1[100];
    obj.getline(arr1,100);
    cout<<"array content : "<< arr1 <<endl;
  cout<<"<----File read operation successfully performed---->"<<endl<< endl;
    obj.close();

}

