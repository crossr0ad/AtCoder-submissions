#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    ll N, A, B, P, Q, R, S;
    cin >> N >> A >> B >> P >> Q >> R >> S;

    auto max1 = max(1 - A, 1 - B), min1 = min(N - A, N - B);
    auto max2 = max(1 - A, B - N), min2 = min(N - A, B - 1);

    for (ll x = P; x <= Q; x++) {
        for (ll y = R; y <= S; y++) {
            auto k = x - A;
            if (max1 <= k && k <= min1 && B + k == y) {
                cout << "#";
                continue;
            }
            if (max2 <= k && k <= min2 && B - k == y) {
                cout << "#";
                continue;
            }
            cout << ".";
        }
        cout << endl;
    }
}
