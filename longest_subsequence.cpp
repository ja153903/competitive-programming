#include <bits/stdc++.h>

using namespace std;

// Finds the length of the longest subsequence
int length(int n, int* list) {
    int* len = new int[n];
    for (int k = 0; k < n; k++) {
        len[k] = 1;
        for (int i = 0; i < k; i++) {
            if (list[i] < list[k]) {
                len[k] = max(len[k], len[i] + 1);
            }
        }
    }
    
    auto max_sub_seq_len = *(max_element(len, len+n));

    delete [] len;

    return max_sub_seq_len;
}

int main() {
    int n;
    cout << "Enter some value n to be the length of your new list: ";
    cin >> n;
    
    int* list = new int[n];
    
    int i = 0;
    while (i < n) { cin >> list[i]; ++i; }
    
    cout << length(n, list) << endl;

    delete [] list;

    return 0;
}
    
