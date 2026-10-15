#include <bits/stdc++.h>
using namespace std;

int main() {
    for(int i = 1; i <= 4; i++) {
        // numbers
        for(int j = 1; j <= i; j++) {
            cout << j;
        }

        // space
        for(int j = 1; j <= (4*2 - 2*i); j++) {
            cout << " ";
        }

        // numbers
        for(int j = i; j >= 1; j--) {
            cout << j;
        }

        cout << endl;
    }

    system("pause");
    return 0;
}
