#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    string S, T;
    cin >> S >> T;
    for (int i = 0; i < 26; i++) {
        for (auto &&s : S) {
            s = (s == 'z' ? 'a' : s + 1);
        }
        if (S == T) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
