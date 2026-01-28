// Sorting array in decending order
#include <iostream>
using namespace std;

void sorted(int arr[], int size) {
    int n = size - 1;

    for (int i = 0; i < n; ++i) {
        int minIdx = i;

        for (int j = i + 1; j < size; ++j) {
            if (arr[j] > arr[minIdx]) {
                minIdx = j;
            }
        }

        if (minIdx != i) {
            int temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
        }
    }
}

int main() {
    int arr[5] = {23, 12, 1, 4, 28};
    sorted(arr, 5);

    for (int i = 0; i < 5; ++i) {
        cout << arr[i];
        if (i + 1 < 5)
            cout << ' ';
        else
            cout << '\n';
    }
}
