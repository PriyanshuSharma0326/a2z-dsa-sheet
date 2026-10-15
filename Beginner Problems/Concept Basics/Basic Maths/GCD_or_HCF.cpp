#include <bits/stdc++.h>
using namespace std;

void GCD(int n1, int n2) {
    set<int> stt;
    int minValue = abs(n1 - n2);

    for(int i = 1; i <= min(minValue, min(n1, n2)); i++) {
        if(n1%i == 0 && n2%i == 0) {
            stt.emplace(i);
        }
    }

    for(auto it: stt) {
        cout << it << " ";
    }
    cout << endl;
}

int main() {
    GCD(20, 15);

    return 0;
}
