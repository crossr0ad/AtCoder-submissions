#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int K;
    string A, B;

    cin >> K >> A >> B;

    ll a10 = 0, b10 = 0;

    for (int i = 0; i < A.length(); i++) {
        a10 *= K;
        a10 += A.at(i) - '0';
    }

    for (int i = 0; i < B.length(); i++) {
        b10 *= K;
        b10 += B.at(i) - '0';
    }

    cout << a10 * b10 << endl;
}
