#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[5] = {5, 4, 3, 2, 1};
    int n = 5;
    int i, j;

    for (i = 0; i < n; i++){
        for (j = 0; j < n - 1; j++) { 
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
   
    for (int a : arr) {
        cout << a << endl;
    }

    return 0;
} 
