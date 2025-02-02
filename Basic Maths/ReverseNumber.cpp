#include <bits/stdc++.h>
using namespace std;

void reverseNumber(int n) {
    int reverseNumber = 0;

    while(n > 0) {
        int lastDigit = n%10;
        reverseNumber = reverseNumber * 10 + lastDigit;
        n /= 10;
    }

    cout << reverseNumber << endl;
}

int solveProblem(int n) {
    if (n == INT_MIN) {
        return 0;
    }
    int reverse = 0;
    int originalX = n;
    n = abs(n);

    while(n > 0) {
        int lastDigit = n % 10;
        n /= 10;

        if(reverse > INT_MAX / 10 || (reverse == INT_MAX / 10 && lastDigit > 7)) {
            return 0;
        }

        if(reverse < INT_MIN / 10 || (reverse == INT_MIN / 10 && lastDigit < -8)) {
            return 0;
        }

        reverse = reverse * 10 + lastDigit;
    }

    return originalX < 0 ? -reverse : reverse;
}

int main() {
    reverseNumber(7789);

    // Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
    cout << "Reversed -7789: " << solveProblem(-7789) << endl;
    cout << "Reversed 112: " << solveProblem(112) << endl;
    cout << "Reversed 4496: " << solveProblem(4496) << endl;

    return 0;
}
