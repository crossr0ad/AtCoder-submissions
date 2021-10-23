#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int H, W;
    cin >> H >> W;

    vector<vector<long long>> A(H, vector<long long>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> A[i][j];
        }
    }
    for (int i1 = 0; i1 < H - 1; i1++) {
        for (int i2 = i1 + 1; i2 < H; i2++) {
            for (int j1 = 0; j1 < W - 1; j1++) {
                for (int j2 = j1 + 1; j2 < W; j2++) {
                    if (A[i1][j1] + A[i2][j2] > A[i2][j1] + A[i1][j2]) {
                        cout << "No" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "Yes" << endl;
}
