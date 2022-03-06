#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;

#define P_LINE(x) cout << (x) << "\n"
#define P_SPACE(x) cout << (x) << " "
#define P_YES(x) cout << ((x) ? "Yes" : "No") << "\n"
#define P_DOUBLE(x) cout << fixed << setprecision(16) << (x) << "\n"
template <typename T>
inline void P_ZPAD(const T& value, const int width) {
    cout << setw(width) << setfill('0') << value << "\n";
}
template <typename T>
inline void P_VEC(const T& vec, const string sep = " ", const string end = "\n",
                  const bool reversed = false) {
    for (size_t i = 0; i < vec.size(); i++) {
        auto idx = reversed ? vec.size() - i - 1 : i;
        cout << vec.at(idx);
        cout << ((i != vec.size() - 1) ? sep : end);
    }
}

struct UnionFind {
    vector<long long> parent_, size_;

    UnionFind(long long n) : parent_(n, -1), size_(n, 1) {}

    long long root_(long long x) {
        return parent_[x] == -1 ? x : parent_[x] = root_(parent_[x]);
    }

    bool issame(long long x, long long y) { return root_(x) == root_(y); }

    bool unite(long long x, long long y) {
        x = root_(x);
        y = root_(y);

        if (x == y) return false;

        if (size_[x] < size_[y]) swap(x, y);

        parent_[y] = x;
        size_[x] += size_[y];
        return true;
    }

    long long size(long long x) { return size_[root_(x)]; }
};

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int N, M;
    cin >> N >> M;
    Graph G(N);

    UnionFind uf(N);

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;  // a -> b in graph
        a--;
        b--;
        if (uf.issame(a, b)) {
            P_YES(false);
            return 0;
        }
        G[a].push_back(b);
        G[b].push_back(a);
        uf.unite(a, b);
    }

    // 1つの頂点から2つ以上の辺が出ていないか判定
    for (auto&& g : G) {
        if (g.size() > 2) {
            P_YES(false);
            return 0;
        }
    }

    P_YES(true);
}
