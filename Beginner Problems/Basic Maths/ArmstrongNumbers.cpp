#include <bits/stdc++.h>
using namespace std;

bool isArmstrongNumber(int n) {
    int sum = 0;
    int temp = n;

    while(n > 0) {
        int lastDigit = n % 10;
        n /= 10;
        sum += lastDigit*lastDigit*lastDigit;
    }

    if(temp == sum) {
        return true;
    }
    else return false;
}

int main() {
    cout << "Is 371 armstrong number? " << isArmstrongNumber(371) << endl;
    cout << "Is 121 armstrong number? " << isArmstrongNumber(121) << endl;

    return 0;
}
