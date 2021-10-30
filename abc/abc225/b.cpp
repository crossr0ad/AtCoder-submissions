#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int N;  // N: |V|, M: |E|
    cin >> N;
    Graph G(N);

    for (int i = 0; i < N - 1; i++) {
        int a, b;
        cin >> a >> b;  // a -> b in graph
        G[a - 1].push_back(b - 1);
        G[b - 1].push_back(a - 1);
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j) {
                if (j == N - 1) {
                    cout << "Yes" << endl;
                    return 0;
                }
                continue;
            }
            if (find(G[i].begin(), G[i].end(), j) == G[i].end()) {
                break;
            }
            if (j == N - 1) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}
