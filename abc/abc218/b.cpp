#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> P(26);

    for (size_t i = 0; i < 26; i++) {
        cin >> P[i];
    }

    for (auto &&p : P) {
        cout << (char)('a' + p - 1);
    }
    cout << endl;
}
