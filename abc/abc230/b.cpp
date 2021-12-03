#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    string S;
    cin >> S;

    auto init = S.find('o');
    if (init > S.size()) {
        cout << (S.size() <= 2 ? "Yes" : "No") << endl;
        return 0;
    }

    for (int i = 0; i < S.size(); i++) {
        auto c = S.at(i);
        if (c == 'o' && i % 3 != init) {
            cout << "No" << endl;
            return 0;
        }
        if (c == 'x' && i % 3 == init) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
