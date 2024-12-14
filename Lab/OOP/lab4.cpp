#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream file ("tt.txt");
    if(!file.is_open())
    cout<<"Error";
    else
    cout<<"enter name: ";
    string name;
    getline(cin,name);
    cout<<"enter roll: ";
    int roll;
    cin>>roll;
    file<<"Name: "<<name<<endl;
    file<<"Roll: "<<roll<<endl;
    cout<<"data written";
}





