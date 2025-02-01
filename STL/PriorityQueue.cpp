#include <bits/stdc++.h>
using namespace std;

void explainPQ() {
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);

    cout << pq.top() << endl; // {10}

    pq.pop();
    cout << pq.top() << endl; // {8}

    // Minimup Heap
    priority_queue<int, vector<int>, greater<int>> prq;

    prq.push(5);
    prq.push(2);
    prq.push(8);
    prq.emplace(10);
    cout << pq.top() << endl; // {2}
}

int main() {
    explainPQ();
    return 0;
}
