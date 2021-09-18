#include <bits/stdc++.h>
using namespace std;

template <typename T>
bool chmin(T &a, const T &b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

const int INF = 1e9;

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;

    vector<pair<int, int>> A(N);
    for (size_t i = 0; i < N; i++) {
        cin >> A[i].first >> A[i].second;
    }
    // dp[i][j][k] :=
    // 1～iの弁当からたこ焼きをj個、たい焼きをk個手に入れるように選んだ時の弁当の選び方の最小数
    vector<vector<vector<int>>> dp(
        N + 1, vector<vector<int>>(X + 1, vector<int>(Y + 1, INF)));
    dp[0][0][0] = 0;

    for (int i = 1; i < N + 1; i++) {
        auto item = A[i - 1];
        for (int j = 0; j < X + 1; j++) {
            for (int k = 0; k < Y + 1; k++) {
                chmin(dp[i][j][k], dp[i - 1][j][k]);
                chmin(dp[i][min(j + item.first, X)][min(k + item.second, Y)],
                      dp[i - 1][j][k] + 1);
            }
        }
    }
    cout << (dp[N][X][Y] == INF ? -1 : dp[N][X][Y]) << endl;
}
