#include <bits/stdc++.h>

using namespace std;

int main() {
    int dim, num;
    cout << "Enter the dimensions you want: ";
    cin >> dim;
  
    vector<vector<int>> value(dim, vector<int>(dim));

    for(int i = 0; i < dim; i++) {
        cout << "Enter values for row " << i << ": ";
        int j = 0;
        while (j < dim && cin >> num) { value[i][j] = num; ++j; }
    }

    for (auto row : value) {
        for (auto value : row) {
            cout << value << " ";
        }
        cout << endl;
    }

    vector<vector<int>> sum(dim+1, vector<int>(dim+1, 0));
    
    for (int y = 1; y <= dim; y++) {
        for (int x = 1; x <= dim; x++) {
            sum[y][x] = max(sum[y][x-1], sum[y-1][x]) + value[y-1][x-1];
        }
    }

    cout << sum[dim][dim] << endl;
 

    return 0;
}
