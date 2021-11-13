#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    ll N;
    cin >> N;

    ll ans = 0;
    for (ll a = 1; a * a * a <= N; a++) {
        for (ll b = a; b * b <= N / a; b++) {
            ans += N / (a * b) - b + 1;
        }
    }

    cout << ans << endl;
}
