#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    char a, b, c;
    cin >> a >> b >> c;

    if (a == b && b == c && c == a) {
        cout << 1 << endl;
    } else if (a == b || b == c || c == a) {
        cout << 3 << endl;
    } else {
        cout << 6 << endl;
    }
}
