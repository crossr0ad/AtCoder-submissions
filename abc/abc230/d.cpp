#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;
const long long INF = 1LL << 60;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    ll D;
    cin >> D;
    vector<pair<ll, ll>> LR(N);
    for (int i = 0; i < N; i++) {
        cin >> LR[i].first >> LR[i].second;
    }

    sort(LR.begin(), LR.end(),
         [](auto x, auto y) { return x.second < y.second; });

    int ans = 0;
    ll x = -INF;
    for (auto &&[l, r] : LR) {
        if (x + D - 1 < l) {
            ans++;
            x = r;
        }
    }
    cout << ans << endl;
}
