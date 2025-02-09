#include <bits/stdc++.h>
using namespace std;

int sumOfN(int i , int sum) {
    if(i < 1) {
        return sum;
    }
    return sumOfN(i - 1, sum + i);
}

int main() {
    cout << sumOfN(10, 0) << endl;
    return 0;
}
