#include <iostream>
using namespace std;

int main(){
    // Initializing 2D Array
    int arr[3][4];

    // Taking Input from the manager
   // Row wise input
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
        
    // }
    
    // inptu column wise
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[j][i];
        }
        
    }


    // Giving out the Values in the form og 3D matric(row and col form)
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}