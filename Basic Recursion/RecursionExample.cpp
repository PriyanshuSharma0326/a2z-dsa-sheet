#include <bits/stdc++.h>
using namespace std;

int cnt = 0;

void print() {
    if(cnt == 3) return;
    cout << cnt << endl;
    cnt++;
    print();
}

int main() {
    print();

    system("pause");
    return 0;
}
