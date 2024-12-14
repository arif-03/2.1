#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the number of rows of the triangle: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int k=i;k<n-1;k++){
            cout<<"  ";
        }
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}