#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    vector<pair<ll, ll>> pos(N);
    for (int i = 0; i < N; i++) {
        cin >> pos[i].first >> pos[i].second;
    }

    ll ans = 0;
    for (int i = 0; i < N - 2; i++) {
        auto a = pos[i];
        for (int j = i + 1; j < N - 1; j++) {
            auto b = pos[j];
            b.first -= a.first;
            b.second -= a.second;
            for (int k = j + 1; k < N; k++) {
                auto c = pos[k];
                c.first -= a.first;
                c.second -= a.second;
                if (b.first * c.second != b.second * c.first) {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
}
