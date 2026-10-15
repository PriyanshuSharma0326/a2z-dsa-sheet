#include <bits/stdc++.h>
using namespace std;

void printAllDivisors(int n) {
    vector<int> vec;

    for(int i = 1; i*i <= n; i++) {
        if(n % i == 0) {
            vec.emplace_back(i);
            if(n/i != i) {
                vec.emplace_back(n/i);
            }
        }
    }

    sort(vec.begin(), vec.end());
    for(auto it: vec) {
        cout << it << " ";
    }
    cout << endl;
}

int sumOfAllDivisors(int n) {
    int sum = 0;

    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            if(sum > INT_MAX - i) {
                return 0;
            }
            sum += i;
        }
    }

    return sum;
}

int main() {
    printAllDivisors(36);

    cout << "Sum of all divisors of 4: " << sumOfAllDivisors(4) << endl;

    return 0;
}
