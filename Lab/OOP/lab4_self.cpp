#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream file ("self.txt");
    if(!file.is_open()){
        cout<<"Error creating file. ";
    }
    else{
        string name;
        int roll;
        cout<<"Enter name: ";
        getline(cin,name);
        cout<<"Enter roll: ";
        cin>>roll;
        file<<"Name: "<<name<<"\nRoll: "<<roll;
        cout<<"Succesfully weitten in the file.";
    }
    return 0;
}