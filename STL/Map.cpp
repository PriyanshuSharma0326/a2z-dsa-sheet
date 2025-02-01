#include <bits/stdc++.h>
using namespace std;

void explainMap() {
    // Key-Value pairs
    map<int, int> mpp;
    map<int, pair<int, int>> mpp1;
    map<pair<int, int>, int> mpp2;

    mpp[1] = 2; // {1, 2}
    mpp.emplace(3, 1); // {3, 1}
    mpp.insert({2, 4});

    mpp2[{2, 3}] = 10;

    for(auto it: mpp) {
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;

    auto it1 = mpp.find(3);
    cout << it1->second << endl;

    auto it2 = mpp.find(5);
    cout << it2->second << endl;
}

int main() {
    explainMap();
    return 0;
}
