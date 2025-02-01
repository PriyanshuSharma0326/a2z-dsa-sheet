#include <bits/stdc++.h>
using namespace std;

int main() {
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < (4-i-1); j++) {
            cout << " ";
        }

        char ch = 'A';
        for (int j = 0; j < (2 * i + 1); j++) {
            cout << ch;

            if (j < i) {
                ch = ch + 1;
            } else {
                ch = ch - 1;
            }
        }

        for(int j = 0; j < (4-i-1); j++) {
            cout << " ";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}
