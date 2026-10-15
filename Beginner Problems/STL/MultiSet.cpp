#include <bits/stdc++.h>
using namespace std;

void explainMutiset() {
    // Not Unique, Only Sorted
    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}

    ms.erase(1); // {}

    ms.insert(2); // {2}
    ms.insert(2); // {2, 2}
    ms.insert(2); // {2, 2, 2}

    cout << "Count of 2: " << ms.count(2) << endl;

    ms.erase(ms.find(2)); // {2, 2}

    ms.insert(3); // {3}
    ms.insert(3); // {3, 3}
    ms.insert(3); // {3, 3, 3}

    ms.erase(ms.find(3), ms.find(3));
}

int main() {
    explainMutiset();
    return 0;
}
