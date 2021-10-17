#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int X;
    cin >> X;

    cout << (X >= 100 && X % 100 == 0 ? "Yes" : "No") << endl;
}
