// Sorting in descending order
#include <iostream>
using namespace std;
int bubblesort(int arr[], int size)
{
    for (int i = 0; i < size -1 ; ++i)
    {
        for (int j = 0; j < size-i-1; ++j)
        {
            if (arr[j]<arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(){
    int arr[5];
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    bubblesort(arr,size);
    for (int j = 0; j < size; j++)
    {
        cout<<arr[j];
        if (j+1<size)
        {
            cout<<' ';
        }
        else
        {
            cout<<"\n";
        }
    }
}