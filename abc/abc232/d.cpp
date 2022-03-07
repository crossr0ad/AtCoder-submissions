#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int H, W;
    cin >> H >> W;
    vector<vector<bool>> wall(H, vector<bool>(W));
    vector<vector<int>> routes(H, vector<int>(W));
    routes[0][0] = 1;

    for (int i = 0; i < H; i++) {
        string S;
        cin >> S;
        for (int j = 0; j < W; j++) {
            wall[i][j] = (S[j] == '#');
        }
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (wall[i][j]) {
                routes[i][j] = -1;
                continue;
            }
            if (j != 0) {
                routes[i][j] = routes[i][j - 1] + 1;
            }
            if (i != 0) {
                routes[i][j] = max(routes[i - 1][j] + 1, routes[i][j]);
            }
            if (routes[i][j] == 0) {
                routes[i][j] = -1;
            }
        }
    }
    int ans = 0;

    for (auto &&r : routes) {
        ans = max(*max_element(r.begin(), r.end()), ans);
    }

    cout << ans << endl;
}
