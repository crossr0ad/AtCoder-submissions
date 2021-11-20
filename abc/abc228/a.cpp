#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int S, T, X;
    cin >> S >> T >> X;

    if (S < T) {
        if (S <= X && X < T) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
        return 0;
    }
    if (X < T || S <= X) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
