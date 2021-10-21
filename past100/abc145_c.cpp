#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;

double dist(pair<int, int> src, pair<int, int> dst) {
    return sqrt((src.first - dst.first) * (src.first - dst.first) +
                (src.second - dst.second) * (src.second - dst.second));
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;

    vector<pair<int, int>> pos(N);
    for (int i = 0; i < N; i++) {
        cin >> pos[i].first >> pos[i].second;
    }

    vector<int> perm(N);
    for (int i = 0; i < N; i++) {
        perm[i] = i;
    }

    auto ans = 0.0;
    auto num = 0;
    do {
        auto distSum = 0.0;
        for (int i = 0; i < N - 1; i++) {
            distSum += dist(pos[perm[i]], pos[perm[i + 1]]);
        }
        ans += distSum;
        num++;

    } while (next_permutation(perm.begin(), perm.end()));
    cout << fixed << setprecision(15) << ans / num << endl;
}
