#include <bits/stdc++.h>
using namespace std;

int main() {
    for(int i = 0; i < 5; i++) {
        for(char ch = 'A'; ch <= 'A' + (5 - i - 1); ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}
