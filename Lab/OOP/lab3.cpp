#include <iostream>
using namespace std;

void full_pyramid(int rows){
    for (int i = 0; i < rows; i++)
    {
        for(int k=i;k<rows;k++){
            cout<<"  ";
        }
        // Inner loop for columns
        for (int j = 1; j <=2*i-1; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}
void half_pyramid(int rows){
    for (int i = 0; i < rows; i++)
    {
        
        // Inner loop for columns
        for (int j =0; j <=i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

int main()
{
    int rows;

    // Get the number of rows from the user
    cout << "Enter the number of rows: ";
    cin >> rows;
    full_pyramid(rows);
    cout<<endl;
    half_pyramid(rows);
    // Outer loop for rows
    

    return 0;
}