// Sorting in ascending order 
#include<iostream>
using namespace std;
int bubblesort(int arr[], int size){
    for (int i = 0; i < size-1; ++i){
        for (int j = 0; j < size-i-1; ++j){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }   
    }
}
int main(){
    int arr[6];
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter "<<size<<" element of an array"<<endl;
    for (int j = 0; j < size; j++)
    {
        cin  >> arr[j];
    }
    bubblesort(arr,size);
    cout<<"Sorted array is: ";
    for (int i = 0; i < size; i++){
        cout<<arr[i];
        if (i+1<size){
            cout<<' ';
        }else{
            cout<<'\n';
        }
    }    
    return 0;
}