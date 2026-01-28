// Sorting array in assending order
#include <iostream>
using namespace std;

void Selectionsort(int arr[], int size){
    int n = size - 1;
    for(int i = 0; i < n; ++i){
        int minIndex = i;
        for(int j = i + 1; j < size; ++j){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        if(minIndex != i){
            int tmp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = tmp;
        }
    }
}

int main(){
    int arr[5] = {64,25,12,22,11};
    int size = sizeof(arr) / sizeof(arr[0]);
    Selectionsort(arr, size);
    for(int i = 0; i < size; ++i){
        cout << arr[i] << (i + 1 < size ? ' ' : '\n');
    }
    return 0;
};