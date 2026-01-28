#include <iostream>
using namespace std;

bool ispresent(int arr[3][4], int target, int i, int j){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(arr[i][j] == target){
                return true;
            }
            return false;
        }
    }
    
}

int main(){
    int arr[3][4];
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout << endl;
        
    }
    int target;
    cin >> target;

    cout<<"Enter Element to found";
    if(ispresent(arr, target, 3, 4)){
        cout<<"Element Found";
    }
    else{
        cout<<"Element Not Found";
    }
}