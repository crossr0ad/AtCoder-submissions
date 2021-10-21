// 解説AC

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

    int N, K;
    cin >> N >> K;

    vector<ll> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    ll ans = INF;
    for (int i = 0; i < (1 << N); i++) {
        bitset<15> bs(i);
        if ((int)bs.count() < K) {
            continue;
        }

        ll cost = 0;
        ll height = 0;
        for (int j = 0; j < N; j++) {
            if (!bs.test(j)) {
                height = max(A[j], height);
                continue;
            }
            if (height >= A[j]) {
                cost += height + 1 - A[j];
                // cout << height + 1 - A[j] << endl;
            }
            height = max(A[j], height + 1);
        }
        // cout << bs.to_string() << ": " << cost << endl;
        ans = min(cost, ans);
    }
    cout << ans << endl;
}
