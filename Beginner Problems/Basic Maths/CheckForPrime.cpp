#include <bits/stdc++.h>
using namespace std;

void checkForPrime(int n) {
    int count = 0;

    for(int i = 1; i*i <= n; i++) {
        if(n%i == 0) {
            count++;
            if(n/i != i) {
                count++;
            }
        }
    }

    if(count == 2) {
        cout << "Prime";
    }
    else {
        cout << "Not prime";
    }
}

int main() {
    checkForPrime(17);

    return 0;
}
