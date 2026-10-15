#include <bits/stdc++.h>
using namespace std;

void recursiveReverse(int index, int array[], int length) {
    if(index >= length/2) return;
    swap(array[index], array[length - index - 1]);
    recursiveReverse(index + 1, array, length);
}

int main() {
    int arr[] = {1, 2, 4, 8, 5, 9, 7};
    int length = sizeof(arr) / sizeof(arr[0]);
    recursiveReverse(0, arr, length);

    for(int i = 0; i < length; i ++) {
        cout << arr[i] << " ";
    }

    return 0;
}
