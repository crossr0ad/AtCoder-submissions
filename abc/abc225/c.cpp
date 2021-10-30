#include <bits/stdc++.h>

#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int N, M;
    cin >> N >> M;

    vector<vector<long long>> B(N, vector<long long>(M));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        bool sflag = false;
        for (int j = 0; j < M; j++) {
            if (B[i][j] != B[0][0] + 7 * i + j) {
                cout << "No" << endl;
                return 0;
            }
            if (sflag) {
                cout << "No" << endl;
                return 0;
            }
            if (B[i][j] % 7 == 0) {
                sflag = true;
            }
        }
    }
    cout << "Yes" << endl;
}
