#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n) {
    if(n < 0) return false;
    int reverse = 0;
    int temp = n;

    while(n > 0) {
        int lastDigit = n % 10;
        n /= 10;
        if(reverse > INT_MAX / 10) {
            return false;
        }
        reverse = reverse * 10 + lastDigit;
    }

    if(temp == reverse) {
        return true;
    }
    else return false;
}

int main() {
    cout << "Is 7789 palindrome? " << isPalindrome(7789) << endl;
    cout << "Is 121 palindrome? " << isPalindrome(121) << endl;

    return 0;
}
