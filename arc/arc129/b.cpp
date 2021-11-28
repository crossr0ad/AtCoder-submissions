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
    vector<ll> L(N), R(N);
    for (int i = 0; i < N; i++) {
        cin >> L[i] >> R[i];
    }

    ll maxL = -1, minR = INF;
    for (int i = 0; i < N; i++) {
        minR = min(R.at(i), minR);
        maxL = max(L.at(i), maxL);

        auto x = (maxL - minR) / 2 + ((maxL - minR) % 2 == 1 ? 1 : 0);
        cout << max(x, 0LL) << endl;
    }
}
