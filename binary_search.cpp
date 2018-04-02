#include <bits/stdc++.h>

using namespace std;

int binarySearchOne(int* arr, int size, int target) {
    int k = 0;
    for (int b = size/2; b >= 1; b /= 2) {
        while (k+b < size && arr[k+b] <= target) k += b;
    }

    return arr[k] == target ? k : -1;
}


int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int target = 4;
    int index_of_target = binarySearchOne(arr, 5, target);
    cout << index_of_target << endl;
    return 0;
}
