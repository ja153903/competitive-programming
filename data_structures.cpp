#include <bits/stdc++.h>

using namespace std;

int main() {
    unordered_set<int> hs;
    hs.insert(4);
    hs.insert(4);
    hs.insert(5);

    cout << hs.size() << endl;

    map<string, int> m;
    m["jaime"] = 23;

    cout << m["jaime"] << endl;

    return 0;
}
