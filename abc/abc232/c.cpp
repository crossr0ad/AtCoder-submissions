#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int N, M;  // N: |V|, M: |E|
    cin >> N >> M;
    // Graph GT(N), GA(N);
    vector GT(N, vector<bool>(N));
    vector GA(N, vector<bool>(N));

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;  // a -> b in graph
        GT[a - 1][b - 1] = true;
        GT[b - 1][a - 1] = true;
    }

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;  // a -> b in graph
        GA[a - 1][b - 1] = true;
        GA[b - 1][a - 1] = true;
    }
    vector<int> P(N);
    for (int i = 0; i < N; i++) {
        P[i] = i;
    }
    do {
        bool flag = false;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (GT[i][j] != GA[P[i]][P[j]]) {
                    flag = true;
                    break;
                }
            }
        }
        if (!flag) {
            cout << "Yes" << endl;
            return 0;
        }
    } while (next_permutation(P.begin(), P.end()));
    cout << "No" << endl;
}
