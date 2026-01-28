#include <iostream>
using namespace std;

int binarysearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1; 
    int mid = (start + end)/2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        // if the key dosen't match mid

        if (key > mid)
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        
        mid = (start+end)/2;
    }
    return -1;
}

int main(){
    int even[6] = {2,4,5,7,22,23};
    int odd[5] = {4,5,7,34,244};

    int evenIndex = binarysearch(even, 6, 23);
    cout<<"Index of 23 is"<<evenIndex<<endl;
    
    int oddIndex = binarysearch(odd, 5, 34);
    cout<<"Index of 23 is"<<oddIndex<<endl;
}