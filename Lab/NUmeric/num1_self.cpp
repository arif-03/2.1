#include<bits/stdc++.h>
using namespace std;
double ction(double x){
    return x*x-4*x-10;
}
int main(){
    double x1,x2,x0,errlimit,xmax;
    cout<<"Enter error limit: ";
    cin>>errlimit;
    xmax= ceil(sqrt(pow((-4.0/1.0),2)-2*(-10.0/1.0)));
    
    for(double i=-xmax;i<=xmax;i++){
        x1=ction(i);
        x2=ction(i+1);
        if((x1<0 &&x2>0)|| (x1>0 && x2<0)){
            x1=i;
            x2=i+1;
            break;
        }
    }
    
    while(x2-x1>errlimit){
        x0=(x2+x1)/2.0;
         double fx0=ction(x0);
         double fx1=ction(x1);
         double fx2=ction(x2);
         if(fx0==0){
            break;
         }
         else if(fx0*fx1<0){
            x2=x0;
         }
         else x1=x0;
    }
    cout<<"ans: "<<x0;


}