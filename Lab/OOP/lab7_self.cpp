#include<iostream>
using namespace std;
class stdt{
    protected:
    int roll;
    string name;
    double mark;
    public:
    void getinfo(){
        cout<<"Enter name: ";
        getline(cin,name);
        cout<<"Enter roll: ";
        cin>>roll;
        cout<<"Enter mark: ";
        cin>>mark;
    }
    void disp(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll: "<<roll<<endl;
    }
};
class grade:public stdt{
    private:
    string letterGrade;
    public:
    void convert(){
        if(mark>80)
        letterGrade = "A+";
        else if (mark>=75 && mark<80)
        letterGrade = "A";
        else letterGrade = "F";
    }
    void display(){
        stdt::disp();
        cout<<"Lettergrade: "<<letterGrade<<endl;
    }
};
int main(){
    grade x;
    x.getinfo();
    x.convert();
    x.display();
}