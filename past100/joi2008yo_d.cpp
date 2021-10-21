#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
const int MAX = 1000001;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int m;
    cin >> m;

    vector<pair<int, int>> pos(m);
    for (int i = 0; i < m; i++) {
        cin >> pos[i].first >> pos[i].second;
    }
    sort(pos.begin(), pos.end());

    // pos[0]を基準とする相対位置に変換
    auto criterion = pos[0];
    for (auto &&p : pos) {
        p.first -= criterion.first;
        p.second -= criterion.second;
    }

    int n;
    cin >> n;

    vector<pair<int, int>> stars(n);
    set<pair<int, int>> stars_set;

    for (int i = 0; i < n; i++) {
        cin >> stars[i].first >> stars[i].second;
        stars_set.insert(stars[i]);
    }
    sort(stars.begin(), stars.end());

    for (int i = 0; i < n; i++) {
        auto [x, y] = stars.at(i);
        bool broken = false;
        for (int j = 1; j < m; j++) {
            auto [dx, dy] = pos.at(j);
            if (x + dx < 0 || x + dx >= MAX || y + dy < 0 || y + dy >= MAX) {
                broken = true;
                break;
            }
            if (stars_set.find({x + dx, y + dy}) == stars_set.end()) {
                broken = true;
                break;
            }
        }
        if (!broken) {
            cout << x - criterion.first << " " << y - criterion.second << endl;
            return 0;
        }
    }
}
