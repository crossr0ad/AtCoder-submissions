#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int N, X;
    cin >> N >> X;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        A[i] = a - 1;
    }

    vector<bool> know(N);
    int i = X - 1;
    while (true) {
        if (know[i]) {
            cout << count(know.begin(), know.end(), true) << endl;
            return 0;
        }
        know[i] = true;
        i = A[i];
    }
}
