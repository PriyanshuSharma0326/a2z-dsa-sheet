#include <bits/stdc++.h>
using namespace std;

void explainSet() {
    // Sorted, Uniqeue
    set<int> set;
    set.insert(1); // {1}
    set.emplace(2); // {1, 2}
    set.insert(2); // {1, 2}
    set.insert(4); // {1, 2, 4}
    set.insert(3); // {1, 2, 3, 4}

    auto it = set.find(3);
    cout << *(it) << endl;

    auto it_temp = set.find(6);
    cout << *(it_temp) << endl;

    set.erase(5);

    int cnt = set.count(1);
    auto it_temp1 = set.find(3);
    set.erase(it_temp1);

    auto it1 = set.find(2);
    auto it2 = set.find(4);
    set.erase(it1, it2);

    auto it = set.lower_bound(2);
    auto it = set.upper_bound(3);
}

int main() {
    explainSet();
    return 0;
}
