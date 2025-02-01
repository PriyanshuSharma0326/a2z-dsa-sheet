#include <bits/stdc++.h>
using namespace std;

int main() {
    for(int i = 1; i <= (10 - 1); i++) {
        if(i <= 10/2) {
            for(int j = 1; j <= i; j++) {
                cout << "*";
            }

            for(int j = 1; j <= 10 - 2*i; j++) {
                cout << " ";
            }

            for(int j = 1; j <= i; j++) {
                cout << "*";
            }
        }
        else {
            for(int j = 1; j <= 10/2 - (i - 10/2); j++) {
                cout << "*";
            }

            for(int j = 1; j <= (i - 10/2)*2; j++) {
                cout << " ";
            }

            for(int j = 1; j <= 10/2 - (i - 10/2); j++) {
                cout << "*";
            }
        }
        cout << endl;
    }

    system("pause");
    return 0;
}
