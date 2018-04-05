#include <bits/stdc++.h>

using namespace std;

#define INF 1000000

vector<int> coins;

int solve(int x) {
    if (x < 0) return (int)INF;
    if (x == 0) return 0;
    int best = (int)INF;
    for (auto c : coins) {
        best = min(best, solve(x-c) + 1);
    }
    return best;
}

int solve_dp(int x, bool ready[], int value[]) {
    if (x < 0) return (int)INF;
    if (x == 0) return 0;
    if (ready[x]) return value[x];
    int best = (int)INF;
    for (auto c : coins) {
        best = min(best, solve_dp(x - c, ready, value) + 1);
    }
    value[x] = best;
    ready[x] = true;
    return best;
}

int iterative_dp(int x, int* value) {
    value[0] = 0;
    for (int i = 1; i <= x; i++) {
        value[i] = INF;
        for (auto c : coins) {
            if (i - c >= 0 && value[i] > value[i-c]+1) {
                value[i] = value[i-c]+1;
            }
        }
    }
    return value[x];
} 

int count_solutions(int x, int* count) {
    count[0] = 1;
    for (int i = 1; i <= x; i++) {
        for (auto c : coins) {
            if (i - c >= 0) {
                count[i] += count[i-c];
            }
        }
    }
    return count[x];
}

int main() {
    coins.push_back(1);
    coins.push_back(3);
    coins.push_back(4);
 
    cout << "Choose a value to enter: " << endl;
    int x;
    cin >> x;
    bool* ready = new bool[x+1];
    int* value = new int[x+1];
    cout << solve_dp(x, ready, value) << endl;  

    int* value_dp = new int[x+1];
    cout << iterative_dp(x, value_dp) << endl;
 
   
    int* count = new int[x+1];
    cout << count_solutions(x, count) << endl;
    
    //for (int i = 0; i < x+1; i++) {
    //    cout << count[i] << endl;
    //}

    delete [] ready;
    delete [] value; 
    delete [] value_dp;
    delete [] count;

    return 0;
}
