#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;

template <typename T>
bool chmax(T& a, const T& b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    ll N, W;
    cin >> N >> W;
    vector<pair<ll, int>> AB(N);
    for (int i = 0; i < N; i++) {
        cin >> AB[i].first >> AB[i].second;
    }

    sort(AB.begin(), AB.end(),
         [](auto x, auto y) { return x.first > y.first; });

    ll w = 0, del = 0;
    for (int i = 0; i < N; i++) {
        auto [a, b] = AB[i];
        if (w + b > W) {
            del += a * (W - w);
            break;
        }
        w += b;
        del += a * b;
    }
    cout << del << endl;
    return 0;
}
