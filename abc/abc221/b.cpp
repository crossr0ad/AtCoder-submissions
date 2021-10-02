#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    string S, T;
    cin >> S >> T;

    pair<char, char> Sdiff = {-1, -1}, Tdiff = {-1, -1};
    int wrongPos = -1;
    for (size_t i = 0; i < S.size(); i++) {
        if (S.at(i) == T.at(i)) {
            continue;
        }
        if (Sdiff.first == -1) {
            Sdiff.first = S.at(i);
            Tdiff.first = T.at(i);
            wrongPos = i;
        } else if (Sdiff.second == -1 && i == wrongPos + 1) {
            Sdiff.second = S.at(i);
            Tdiff.second = T.at(i);
        } else {
            cout << "No" << endl;
            return 0;
        }
    }

    if (Sdiff.first == -1) {
        cout << "Yes" << endl;
    } else if (Sdiff.first == Tdiff.second && Sdiff.second == Tdiff.first) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
