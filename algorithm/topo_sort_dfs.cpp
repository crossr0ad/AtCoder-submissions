// 深さ優先探索によるトポロジカルソート。
// 優先度付きキュー（priority_que）の優先順を変えることで制約内で順序を変えられる。

#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;

template <typename T>
void printVec(const T &vec) {
    for (size_t i = 0; i < vec.size(); i++) {
        cout << vec.at(i) + 1;
        if (i < vec.size() - 1) {
            cout << ' ';
        }
    }
    cout << endl;
}

vector<bool> seen;
vector<int> ans;

void rec(const Graph &G, int v) {
    seen[v] = true;
    for (auto next_v : G[v]) {
        if (seen[next_v]) {
            continue;
        }
        rec(G, next_v);
    }

    // 帰りがけのノードを登録する
    ans.push_back(v);
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int N, M;  // N: |V|, M: |E|
    cin >> N >> M;

    Graph G(N);
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        G[a - 1].push_back(b - 1);
    }

    seen.assign(N, false);

    for (int i = 0; i < N; i++) {
        if (seen[i]) {
            continue;
        }
        rec(G, i);
    }
    reverse(ans.begin(), ans.end());

    printVec(ans);
}
