#include <bits/stdc++.h>
using namespace std;

void explainStack() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(3);
    st.emplace(5);

    cout << "Stack elements: ";
    stack<int> temp = st;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    cout << "Top: " <<st.top() << endl;
    st.pop();
    cout << "Top: " << st.top() << endl;
    cout << "Size: " << st.size() << endl;
}

int main() {
    explainStack();
    return 0;
}
