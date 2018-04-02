#include <bits/stdc++.h>

using namespace std;

int maxsubarray(int* arr, int n) {
    int best = arr[0], current = arr[0];
    int i;
    for (i = 1; i < n; i++) {
        current = max(arr[i], arr[i] + current);
        best = max(best, current);
    }
    return best;
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
 
    cout << "Enter into array until size is filled: " << endl;
    int loop_counter = 0;
    int* arr = new int[n];
    while (loop_counter < n) {
       cin >> arr[loop_counter];
       loop_counter++;
    }

    int max_sum = maxsubarray(arr, n);

    cout << max_sum << endl;

    delete [] arr;
    
    return 0;
}
       
