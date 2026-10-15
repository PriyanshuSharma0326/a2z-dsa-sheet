#include <bits/stdc++.h>
using namespace std;

int main() {
    for(int i = 0; i < 4*2-1; i++) {
        for(int j = 0; j < 4*2-1; j++) {
            int top = i;
            int left = j;
            int right = (2*4 - 2) - j;
            int bottom = (2*4 - 2) - i;
            cout << (4 - min(min(top, bottom), min(left, right)));
        }
        cout << endl;
    }

    system("pause");
    return 0;
}
