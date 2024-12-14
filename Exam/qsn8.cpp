#include<bits/stdc++.h>
using namespace std;
double equation(double x){
    return x*x-3*x+2;
}
double derivative (double x){
    return 2*x-3;
}

int main(){
    cout<<"Enter error limit: ";
    double errlimit;
    cin>>errlimit;
    cout<<"Enter initial value: ";
    double x;
    cin>>x;
    double a=equation(x)/derivative(x);
    while(abs(a)>errlimit){
        a=equation(x)/derivative(x);
        x=x-a;
    }
    cout<<"The approximate root of the equation is : "<<x<<endl;
    return 0;
}