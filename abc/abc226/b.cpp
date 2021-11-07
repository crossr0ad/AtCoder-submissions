#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    set<vector<int>> A;

    for (int i = 0; i < N; i++) {
        int l;
        cin >> l;

        vector<int> a(l);
        for (auto &&i : a) {
            cin >> i;
        }
        A.insert(a);
    }
    cout << A.size() << endl;
}
