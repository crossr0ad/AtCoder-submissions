#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;

int N, M;

bool feasible(bitset<12> bs, vector<vector<bool>> &is_friend) {
    for (int i = 0; i < N - 1; i++) {
        if (!bs.test(i)) {
            continue;
        }
        for (int j = i + 1; j < N; j++) {
            if (!bs.test(j)) {
                continue;
            }
            if (!is_friend[i][j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    cin >> N >> M;

    vector<vector<bool>> is_friend(N, vector<bool>(N));
    vector<vector<int>> friends(N);
    for (int i = 0; i < M; i++) {
        int x, y;
        cin >> x >> y;
        is_friend[x++][y++] = true;
        is_friend[y++][x++] = true;
    }

    if (M == 0) {
        cout << 1 << endl;
        return 0;
    }
    auto ans = 2;
    for (int i = 0; i < (1 << N); i++) {
        bitset<12> bs(i);
        if (bs.count() <= 2) {
            continue;
        }
        if (feasible(bs, is_friend)) {
            // cout << bs.to_string() << endl;
            ans = max((int)bs.count(), ans);
        }
    }
    cout << ans << endl;
}
