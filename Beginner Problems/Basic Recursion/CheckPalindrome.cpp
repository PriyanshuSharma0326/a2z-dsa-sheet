#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(int index, char str[], int length) {
    if(index > length/2) return true;
    if(str[index] != str[length - index - 1]) {
        return false;
    }
    else {
        return checkPalindrome(index + 1, str, length);
    }
}

int main() {
    char str[] = "madam";
    int length = strlen(str);
    cout << checkPalindrome(0, str, length) << endl;
    return 0;
}
