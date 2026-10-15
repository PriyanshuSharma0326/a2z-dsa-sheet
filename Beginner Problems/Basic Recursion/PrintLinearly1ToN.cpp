#include <bits/stdc++.h>
using namespace std;

void print(int i, int n) {
    if (i > n) return;
    cout << i << endl;
    print(i + 1, n);
}

int main() {
    int limit = 7;
    print(1, 7);
    return 0;
}
