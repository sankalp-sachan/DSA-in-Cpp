#include <iostream>
#include <array>
using namespace std;

void printArray(int arr[], int size){
    cout<<"Printing the array"<<endl;

    for (int i = 0; i < size; i++)
    {
        cout<< arr[i] << " ";

    }
    
}



int main(){
    // int second[3] = {1,23,3};

    // cout<<"Value at 1 index: "<<second[1]<<endl;

    
    
    int a=2;
    int third[15] = {a};
    
    int n = 15;

    printArray(third, 15);


    cout<<endl;
    cout<<endl;
    cout<<endl;
    // int fourth[10] = {1};
    
    // n = 10;
    
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<fourth[i]<<" ";
    // }

    
    cout<< endl<< "Fine" <<endl <<endl;
    
    return 0;
}