#include <bits/stdc++.h>

using namespace std;

typedef vector<string> vs;

bool comp(string a, string b) {
    if (a.size() != b.size()) {
        // if they aren't the same length
        // then we sort by length
        // else we sort by alphabetical order
        return a.size() < b.size();
    }
   
    return a < b;
}

int main() {
    vs names;
    names.push_back("jaime");
    names.push_back("jenny");
    names.push_back("jen");
    names.push_back("alex");
    // we can pass in a callback function
    sort(names.begin(), names.end(), comp);

    for (string s : names) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}
