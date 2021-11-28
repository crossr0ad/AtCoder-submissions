#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;

vector<bool> bits(ll n) {
    vector<bool> bits;
    for (int i = 0; n != 0; i++) {
        bits.push_back(n % 2 == 1);
        n /= 2;
    }
    return bits;
}

int digit(ll n) {
    if (n == 0) {
        return 1;
    }
    int maxDigit = 60;
    for (int i = maxDigit; i >= 0; i--) {
        if (n & (1LL << i)) {
            return i;
        }
    }
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    ll N, L, R;
    cin >> N >> L >> R;

    auto Nb = bits(N);
    auto Lb = bits(L);
    auto Rb = bits(R);

    ll ans = 0;

    for (int i = 0; i < Nb.size(); i++) {
        auto d = Nb.size() - 1 - i;
        bool b = Nb.at(d);

        if (b) {
            ans += 1 << d;
        }
    }

    cout << ans << endl;
}
