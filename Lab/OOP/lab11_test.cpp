#include<iostream>
using namespace std;
int main(){
    cout<<"Enter first number: ";
    double n1,n2;
    cin>>n1;
    cout<<"Enter second number: ";
    cin>>n2;
    char oper;
    cout<<"Enter operation: (+ or - or * or / : )";
    cin>>oper;
    switch (oper)
    {
    case '+':
        cout<<"Addition of Number 1 and Number 2 is: "<<n1+n2;
        /* code */
        break;
    
    default: cout<<"invalid.";
        break;
    }
}