#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int N, K;
    cin >> N >> K;
    vector<vector<int>> P(N, vector<int>(3));
    vector<int> sums(N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> P[i][j];
        }
        sums[i] = accumulate(P[i].begin(), P[i].end(), 0);
    }

    auto _sums = sums;
    sort(_sums.begin(), _sums.end(), greater<int>());
    auto criterion = _sums[K - 1];

    for (int i = 0; i < N; i++) {
        cout << (sums[i] + 300 >= criterion ? "Yes" : "No") << endl;
    }
}
