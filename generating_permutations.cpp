#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> permutations;
    for (int i = 0; i < 5; i++) {
        permutations.push_back(i);
    }
    do {
       for (auto el : permutations) {
           cout << el << " ";
       }
       cout << endl;
    } while(next_permutation(permutations.begin(), permutations.end()));
    return 0;
}
