#include <bits/stdc++.h>
using namespace std;

int main() {
    for(int i = 1; i <= 5; i++) {
        char ch = 'E';

        for(int j = 5; j > (5 - i); j--) {
            int count = (5 - j - i + 1);
            char charNew = ch + count;
            cout << charNew;
        }
        cout << endl;
    }

    system("pause");
    return 0;
}
