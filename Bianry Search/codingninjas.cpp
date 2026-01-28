#include<iostream>
using namespace std;

// Function to find FIRST occurrence of key
int firstOccurrence(int arr[], int size, int key){
    int start = 0, end = size - 1;
    int ans = -1;

    while(start <= end){
        int mid = (start + end) / 2;

        if(arr[mid] == key){
            ans = mid;        // store answer
            end = mid - 1;    // move left for earlier occurrence
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

// Function to find LAST occurrence of key
int lastOccurrence(int arr[], int size, int key){
    int start = 0, end = size - 1;
    int ans = -1;

    while(start <= end){
        int mid = (start + end) / 2;

        if(arr[mid] == key){
            ans = mid;        // store answer
            start = mid + 1;  // move right for later occurrence
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

int main(){
    int arr[5] = {3, 3, 3, 33, 44};

    cout << "First occurrence of 3 is at index: "
         << firstOccurrence(arr, 5, 3) << endl;

    cout << "Last occurrence of 3 is at index: "
         << lastOccurrence(arr, 5, 3) << endl;

    return 0;
}
