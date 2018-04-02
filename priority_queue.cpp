#include <bits/stdc++.h>

using namespace std;

int main() {
    priority_queue<int> max_q;
    // by default stores the values in ascending order and priority is given to largest values

    max_q.push(3);
    max_q.push(5);
    max_q.push(7);
    
    cout << max_q.top() << endl;
    max_q.pop();
    
    priority_queue<int, vector<int>, greater<int>> min_q;
    // by doing this we store the values in descending order and priority is given to the smallest values

    min_q.push(3);
    min_q.push(5);
    min_q.push(7);

    cout << min_q.top() << endl;
 
    
    return 0;
}
