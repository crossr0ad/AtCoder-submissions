// 幅優先探索によるトポロジカルソート。
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

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int N, M;  // N: |V|, M: |E|
    cin >> N >> M;

    Graph G(N);
    vector<int> numIn(N);

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;  // a -> b in graph
        G[a - 1].push_back(b - 1);
        numIn.at(b - 1)++;
    }

    priority_queue<int> que;  // pop descending
    // priority_queue<int, vector<int>, greater<int>> que; // pop ascending
    for (int i = 0; i < N; i++) {
        if (numIn.at(i) == 0) {
            que.push(i);
        }
    }

    vector<int> ans;
    while (!que.empty()) {
        auto top = que.top();
        que.pop();
        ans.push_back(top);

        // delete top vertex from graph
        for (auto &&e : G.at(top)) {
            numIn.at(e)--;
            if (numIn.at(e) == 0) {
                que.push(e);
            }
        }
        G.at(top).clear();
    }

    if (any_of(G.begin(), G.end(), [](auto v) { return !v.empty(); })) {
        cout << -1 << endl;
        return 0;
    }

    printVec(ans);
}
