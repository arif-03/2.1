#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
    int roll;
    string name;
    float mark;

public:
    void getInfo()
    {
        cout << "Enter Roll Number: ";
        cin >> roll;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Mark: ";
        cin >> mark;
    }

    void displayInfo()
    {
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Mark: " << mark << endl;
    }
};

class Grade : public Student
{
private:
    string letterGrade;

public:
    void convertToLetterGrade()
    {
        if (mark >= 80)
            letterGrade = "A+";
        else if (mark >= 75 && mark < 80)
            letterGrade = "A";
        else
            letterGrade = "F";
    }

    void displayInfo()
    {
        Student::displayInfo();
        cout << "Letter Grade: " << letterGrade << endl;
    }
};

int main()
{
    Grade obj;

    obj.getInfo();
    obj.convertToLetterGrade();
    obj.displayInfo();

    return 0;
}