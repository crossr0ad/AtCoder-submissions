#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    ll d, n, m;
    cin >> d >> n >> m;

    set<ll> S{0};
    for (ll i = 0; i < n - 1; i++) {
        ll s;
        cin >> s;
        S.insert(s);
    }
    ll ans = 0;
    for (ll i = 0; i < m; i++) {
        ll query;
        cin >> query;
        if (query == 0 || query == d) {
            continue;
        }

        auto f = *prev(S.lower_bound(query));
        auto l = S.lower_bound(query) == S.end() ? d : *S.lower_bound(query);
        ans += min(query - f, l - query);
    }
    cout << ans << endl;
}
