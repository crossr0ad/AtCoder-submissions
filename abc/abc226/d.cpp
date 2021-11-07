#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;

pair<ll, ll> prime_pair(pair<ll, ll> pos0, pair<ll, ll> pos1) {
    auto dx = pos1.first - pos0.first;
    auto dy = pos1.second - pos0.second;
    auto _gcd = gcd(dx, dy);
    return {dx / _gcd, dy / _gcd};
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;

    vector<pair<ll, ll>> pos(N);

    for (int i = 0; i < N; i++) {
        cin >> pos[i].first >> pos[i].second;
    }

    set<pair<ll, ll>> magics;

    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            auto p = prime_pair(pos[i], pos[j]);
            magics.insert(p);
            magics.insert({-p.first, -p.second});
        }
    }
    cout << magics.size() << endl;
}
