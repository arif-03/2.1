#include <iostream>
#include <fstream>
using namespace std;

int main(){
   ifstream file ("self.txt");
   if(file.is_open()){
      string line;
      while(getline(file,line)){
         cout<<line<<endl;
      }
   }
   else cout<<"Error opening file.";
}



