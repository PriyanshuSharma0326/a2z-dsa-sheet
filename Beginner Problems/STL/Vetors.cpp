#include <bits/stdc++.h>
using namespace std;

void explainVectors() {
    vector<int>v;
    v.push_back(1);
    v.emplace_back(2);

    // vector<int>::iterator it = v.begin();
    for(auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;

    vector<pair<int, int>>vec;
    vec.push_back({1, 2});
    vec.emplace_back(1,2); // Here emplace_back automatically assumes (1, 2) as a pair

    vector<int> v1(5, 100); // Vector containing 5 instances of 100
    for(auto it = v1.begin(); it != v1.end(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;

    vector<int> temp1(5, 20);
    vector<int> temp2(temp1); // A copy of temp1

    vector<int> temp;
    temp.push_back(1);
    temp.push_back(2);
    temp.push_back(3);
    temp.push_back(4);

    vector<int>::iterator it_end = temp.end() - 1;
    cout << "Using end(): " << *(it_end) << endl;

    vector<int>::reverse_iterator it_rbegin = temp.rbegin();
    cout << "Using rbegin(): " << *(it_rbegin) << endl;

    cout << "Using rend() in reverse order: ";
    for (vector<int>::reverse_iterator it = temp.rbegin(); it != temp.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Using end() in forward order: ";
    for (vector<int>::iterator it = temp.begin(); it != temp.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << temp.back();
    cout << endl;

    for(auto it: temp) {
        cout << it << " ";
    }
    cout << endl;

    temp.erase(temp.begin() + 1);
    for(auto it: temp) {
        cout << it << " ";
    }
    cout << endl;

    vector<int> temp3;
    temp3.push_back(10);
    temp3.push_back(20);
    temp3.push_back(12);
    temp3.push_back(23);
    temp3.push_back(35);

    temp3.erase(temp3.begin() + 2, temp3.begin() + 4); // [param1, param2)
    for(auto it: temp3) {
        cout << it << " ";
    }
    cout << endl;

    vector<int>vec_new(2, 100); //{100, 100}
    vec_new.insert(vec_new.begin(), 300); // {300, 100, 100}
    vec_new.insert(vec_new.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}

    vector<int> copy(2, 50); //{50, 50}
    vec_new.insert(vec_new.begin(), copy.begin(), copy.end());
    for(auto it: vec_new) {
        cout << it << " ";
    }
    cout << endl;

    cout << vec_new.size() << endl;
    vec_new.pop_back(); // {100}

    vec_new.clear();
    cout << vec_new.empty();
}

int main() {
    explainVectors();
    return 0;
}
