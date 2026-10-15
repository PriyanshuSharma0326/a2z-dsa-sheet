#include <bits/stdc++.h>
using namespace std;

int main() {
    char ch = 'A';
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= i; j++) {
            cout << ch;
        }
        ch = ch + 1;
        cout << endl;
    }

    system("pause");
    return 0;
}
