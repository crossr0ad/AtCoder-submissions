#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;

const int MAX_POS = 5000;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;

    vector<pair<int, int>> pos(N);
    vector<vector<bool>> exists(MAX_POS, vector<bool>(MAX_POS, false));
    for (int i = 0; i < N; i++) {
        cin >> pos[i].first >> pos[i].second;
        exists[pos[i].first][pos[i].second] = true;
    }

    sort(pos.begin(), pos.end());

    int ans = 0;
    for (int i = 0; i < N - 1; i++) {
        auto pos1 = pos.at(i);
        for (int j = i + 1; j < N; j++) {
            auto pos2 = pos.at(j);
            auto dx = pos1.first - pos2.first;
            auto dy = pos1.second - pos2.second;

            pair pos3 = {pos2.first + dy, pos2.second - dx};
            pair pos4 = {pos1.first + dy, pos1.second - dx};
            if (pos3.first < 0 || pos4.first < 0 || pos3.second < 0 ||
                pos4.second < 0) {
                continue;
            }
            if (pos3.first >= MAX_POS || pos4.first >= MAX_POS ||
                pos3.second >= MAX_POS || pos4.second >= MAX_POS) {
                continue;
            }
            if (!exists[pos3.first][pos3.second] ||
                !exists[pos4.first][pos4.second]) {
                continue;
            }
            ans = max(dx * dx + dy * dy, ans);
        }
    }
    cout << ans << endl;
}
