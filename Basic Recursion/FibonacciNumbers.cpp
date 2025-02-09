#include <bits/stdc++.h>
using namespace std;

int fibonacci(int index) {
    if(index <= 1) return index;
    else {
        return fibonacci(index - 1) + fibonacci(index - 2);
    }
}

int main() {
    cout << "10th Fibonacci number is " << fibonacci(10 - 1);
    return 0;
}
