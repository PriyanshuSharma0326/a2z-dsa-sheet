#include <bits/stdc++.h>
using namespace std;

void printName(int i, int n) {
    // Base Case
    if(i > n) return;

    cout << "Alex" << endl;
    printName(i + 1, n);
}

int main() {
    int limit = 5;
    printName(1, limit);

    // system("pause");
    return 0;
}
