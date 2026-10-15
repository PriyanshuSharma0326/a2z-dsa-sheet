#include <bits/stdc++.h>
using namespace std;

void countDigits(int n) {
    int count = 0;
    while(n > 0) {
        int lastDigit = n % 10;
        count++;
        n /= 10;
    }
    cout << "Count using basic method: " << count << endl;
}

void countDigitsWithLog10(int n) {
    cout << "Count using log method: " << int(log10(n) + 1) << endl;
}

void solveProblem(int n) {
    int temp = n;
    int solutionCount = 0;

    while (n > 0) {
        int digit = n % 10;
        if (digit != 0 && temp % digit == 0) {
            solutionCount++;
        }
        n /= 10;
    }

    cout << solutionCount << endl;
}

int main() {
    countDigits(7789);
    countDigitsWithLog10(7789);
    countDigitsWithLog10(244398761);

    // Given a positive integer n, count the number of digits in n that divide n evenly (i.e., without leaving a remainder). Return the total number of such digits.
    // A digit d of n divides n evenly if the remainder when n is divided by d is 0 (n % d == 0).
    // Digits of n should be checked individually. If a digit is 0, it should be ignored because division by 0 is undefined.
    solveProblem(1072);
    solveProblem(2446);
    solveProblem(23);

    return 0;
}
