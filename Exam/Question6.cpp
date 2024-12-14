#include<iostream>
#include<fstream>
using namespace std;
void datawrite(){
    ofstream file("Test.txt");
    if(!file.is_open()){
        cout<<"Error creating file !";

    }
    else{
        int roll;
        string name;
        cout<<"Enter your roll: ";
        cin>>roll;
        cin.ignore();
        cout<<"Enter your Name: ";
        getline(cin,name);

        file<<"Roll: "<<roll<<endl;
        file<<"Name: "<<name<<endl;
        cout<<"Written in the file Successfully. "<<endl;
    }
}
void dataDisplay(){
    ifstream file ("Test.txt");
   if(file.is_open()){
      string line;
     
      while(getline(file,line)){
         cout<<line<<endl;
      }
   }
   else cout<<"Error opening file.";
}


int main (){
    

    datawrite();
    cout<<"\nDisplaying information from file."<<endl;
    dataDisplay();
    
    
}