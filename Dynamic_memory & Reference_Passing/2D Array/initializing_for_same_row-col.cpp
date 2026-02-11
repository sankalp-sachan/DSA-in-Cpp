#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int** arr = new int*[n];

    // Creating 2D array

    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }

    // Taking Input

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
        
    }
    
    // Output

        for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    

    return 0;
}