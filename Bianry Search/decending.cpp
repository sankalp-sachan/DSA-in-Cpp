#include<iostream>
using namespace std;

 int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = (start+end)/2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        
        if (key > mid)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start+end)/2;
    }
    return -1;
} 
int main(){
    int even[6] = {55,32,12,4,3,2};
    int odd[5] = {56,44,22,11,2};

    int evenIndex = binarySearch(even, 6, 32);
    cout<<"The index of 32 is: "<<evenIndex<<endl;

    int oddIndex = binarySearch(odd, 5, 44);
    cout<<"The index of 44 is: "<<oddIndex<<endl;
}